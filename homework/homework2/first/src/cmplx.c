#include "cmplx.h"
#include <math.h>

void cmplx_div(cmplx_t a, cmplx_t b, cmplx_t c) {
    float denominator = b[0] * b[0] + b[1] * b[1];
    c[0] = (a[0] * b[0] + a[1] * b[1]) / denominator;
    c[1] = (a[1] * b[0] - a[0] * b[1]) / denominator;
}

void cmplx_mul(cmplx_t a, cmplx_t b, cmplx_t c) {
    c[0] = a[0] * b[0] - a[1] * b[1];
    c[1] = a[0] * b[1] + a[1] * b[0];
}

double cmplx_mag(cmplx_t a) {
    // Implementacija izračuna magnituda kompleksnog broja
    // returns |a|
    return sqrt(a[0] * a[0] + a[1] * a[1]);
}

double cmplx_phs(cmplx_t a) {
    // Implementacija izračuna faze kompleksnog broja u radijanima
    // returns phase in radians of a
    return atan2(a[1], a[0]);
}

double cmplx_real(double mag, double phs) {
    // Implementacija izračuna realnog dijela iz magnituda i faze
    // returns real part of mag/_phs
    return mag * cos(phs);
}

double cmplx_imag(double mag, double phs) {
    // Implementacija izračuna imaginarnog dijela iz magnituda i faze
    // returns imaginary part of mag/_phs
    return mag * sin(phs);
}

void cmplx_dft(cmplx_t *input, cmplx_t *output, int N) {
    // Implementacija DFT transformacije nad kompleksnim ulaznim signalom
}

void cmplx_idft(cmplx_t *input, cmplx_t *output, int N) {
    // Implementacija inverzne DFT transformacije nad kompleksnim ulaznim signalom
}