#include <stdio.h>
#include "cmplx.h"
#include "io.h"

int main() {
    cmplx_t a, b, c;
    read_complex("Enter complex number a", a);

    double mag_a = cmplx_mag(a);
    double phs_a = cmplx_phs(a);
    double real_a = cmplx_real(mag_a, phs_a);
    double imag_a = cmplx_imag(mag_a, phs_a);
    
    printf("Real part of a: %.2f\n", real_a);
    printf("Imaginary part of a: %.2f\n", imag_a);

    return 0;
}