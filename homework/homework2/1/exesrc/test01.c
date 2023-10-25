#include <stdio.h>
#include "cmplx.h"
#include "io.h"

int main() {
    cmplx_t a, b, c;
    read_complex("Enter complex number a", a);
    read_complex("Enter complex number b", b);

    cmplx_div(a, b, c);
    print_complex("a / b", c);

    cmplx_mul(a, b, c);
    print_complex("a * b", c);

    double mag = cmplx_mag(a);
    double phs = cmplx_phs(a);
    printf("Magnitude of a: %.2f\n", mag);
    printf("Phase of a: %.2f radians\n", phs);
    
    mag = cmplx_mag(b);
    phs = cmplx_phs(b);
    printf("Magnitude of b: %.2f\n", mag);
    printf("Phase of b: %.2f radians\n", phs);

    return 0;
}