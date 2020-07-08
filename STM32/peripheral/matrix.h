#ifndef MATRIX_H
#define MATRIX_H

#include <stdint.h>

unsigned int matrix_refresh_cnt();
void *matrix_fb(unsigned int active, unsigned int *w, unsigned int *h);
void matrix_fb_swap();
void matrix_fb_copy();

#endif // MATRIX_H
