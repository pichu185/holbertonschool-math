#ifndef MATH_COMPLEX
#define MATH_COMPLEX

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>

/**
 * complex_number - struct that represent a complex number
 * @char_to_compare: print type
 * @re: real part of the complex number
 * @im: imaginary part of the complex number
 */
typedef struct complex_number
{
        double re;
        double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg (double m, double arg, complex *c3);

#endif
