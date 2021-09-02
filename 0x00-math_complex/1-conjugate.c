#include "holberton.h"

/**
 * conjugate - function that returns the conjugate of
 * a given complex number
 * @c: complex number to display
 */

complex conjugate(complex c)
{
	complex conj;

	conj.re = c.re;
	conj.im = -c.im;
	return (conj);
}
