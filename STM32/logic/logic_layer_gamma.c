// Layer: Gamma
// Parameters:
//   [0]	Flags (unused)
//   [1]	Factor in hex: 0xAB A.B

#include <math.h>
#include <debug.h>
#include <peripheral/matrix.h>
#include <logic/logic_layers.h>

typedef struct PACKED {
	uint8_t flags;
	uint8_t factor;
} param_t;

static inline void updateLut(param_t *pp, uint8_t *ptr)
{
	uint8_t ifactor = pp->factor;
	float factor = ((ifactor >> 4) & 0xf) + (ifactor & 0xf) / 10;
	float max = powf(255.0, factor);
	for (unsigned int i = 0; i < 256; i++)
		*(ptr + i) = roundf(powf(i, factor) / max * 255.0);
}

static void init(layer_obj_t *pparam, layer_obj_t *pdata)
{
	// Allocate param and data buffers
	pparam->size = sizeof(param_t);
	logic_layers_alloc(pparam);
	pdata->size = 256;
	logic_layers_alloc(pdata);
	if (pparam->size == 0 || pdata->size == 0) {
		pparam->size = 0;
		pdata->size = 0;
	}
}

static void config(layer_obj_t *pparam, layer_obj_t *pdata, unsigned int *ok,
		   unsigned int w, unsigned int h)
{
	if (pparam->size == 0 || pdata->size == 0) {
		*ok = 0;
		return;
	}
	updateLut(pparam->p, pdata->p);
}

static void proc(layer_obj_t *pparam, layer_obj_t *pdata, unsigned int tick,
		 uint8_t *pfb, unsigned int w, unsigned int h)
{
	if (pdata->size == 0)
		return;

	uint8_t *lut = pdata->p;
	for (unsigned int y = 0; y < h; y++) {
		for (unsigned int x = 0; x < w; x++) {
			uint8_t *pv = &pfb[y * w + x];
			*pv = lut[*pv];
		}
	}
}

LOGIC_LAYER_HANDLER() = {
	.id = LayerIdGamma,
	.init = &init,
	.config = &config,
	.proc = &proc,
};
