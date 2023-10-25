#include "io.h"
#include <stdio.h>
#include "cmplx.h"

void read_complex(char *prompt, cmplx_t x) {
    printf("%s (real imag): ", prompt);
    scanf("%f %f", &x[0], &x[1]);
}

void print_complex(char *str, cmplx_t x) {
    printf("%s: %.2f + %.2fi\n", str, x[0], x[1]);
}