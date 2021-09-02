#include "holberton.h"
#include <math.h>


/**
 * modulus - function that returns the modulus of a given
 * complex number
 * @c: complex number to display
 */

double modulus(complex c)
{
	return (sqrt((c.im * c.im) + (c.re * c.re)));
}
