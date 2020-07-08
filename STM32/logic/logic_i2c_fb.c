#include <debug.h>
#include <system/systick.h>
#include <peripheral/i2c_slave.h>
#include <peripheral/matrix.h>

#define FUNC_BASE	0x10
#define FUNC_SIZE	0x10

typedef enum {
	// Framebuffer functions
	// FuncSwap
	//   Write 0 to access active FB
	//   Write 1 to access standby FB
	//   Write 0x80 to copy active FB to standby FB
	//   Write 0xff to activate standby FB
	// FuncX, FuncY
	//   Starting offset of FuncPtr
	FuncSwap = 0, FuncX = 0xd, FuncY = 0xe, FuncPtr = 0xf
} func_t;

static uint8_t regs[FUNC_SIZE];

static void *fb_ptr(unsigned int *size)
{
	unsigned int w = 0, h = 0;
	unsigned int x = regs[FuncX], y = regs[FuncY];
	uint8_t *p = matrix_fb(!!regs[FuncSwap], &w, &h);
	unsigned int ofs = y * w + x;
	p += ofs;
	*size = ofs >= w * h ? 0 : w * h - ofs;
	return p;
}

static void *i2c_data(unsigned int write, unsigned int id, unsigned int *segment, unsigned int *size)
{
	if (id < FUNC_BASE || id >= (FUNC_BASE + FUNC_SIZE))
		return 0;

	func_t func = id - FUNC_BASE;
	switch (func) {
	default:
		if (*segment == 0) {
			// Segment 1: Registers
			*segment = 1;
			*size = FuncPtr - func;
			return &regs[func];
		}
		// fall through
	case FuncPtr:
		// Special register, frame buffer pointer access
		// Segment 0 (last): Matrix data
		*segment = 0;
		return fb_ptr(size);
	}
}

static void i2c_write(unsigned int id, unsigned int segment, unsigned int size, void *p)
{
	if (id < FUNC_BASE || id >= (FUNC_BASE + FUNC_SIZE))
		return;

#if DEBUG > 5
	uint8_t *ptr = p;
	printf(ESC_WRITE "%lu\tlogic fb: write 0x%02x complete, segment %u, %u bytes" ESC_DATA,
	       systick_cnt(), id, segment, size);
	for (unsigned int i = 0; i < data.buf.pos; i++)
		printf(" 0x%02x", ptr[i]);
	printf("\n");
#endif

	// Check register written
	func_t start = id - FUNC_BASE;
	func_t end = segment == 1 ? start + size : FuncPtr;
	if (start <= FuncSwap && end > FuncSwap) {
		if (regs[FuncSwap] == 0xff)
			matrix_fb_swap();
		else if (regs[FuncSwap] == 0x80)
			matrix_fb_copy();
	}
}

I2C_SLAVE_REG_HANDLER() = {&i2c_data, &i2c_write};