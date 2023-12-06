#include "main.h"

/**
 * flip_bits- function
 * @n: input
 * @m: input
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	if (n == 0 && m == 0)
		return (0);
	else if ((n & 1) == (m & 1))
		return (flip_bits((n >> 1), (m >> 1)));
	else
		return (1 + flip_bits((n >> 1), (m >> 1)));
}
