#include "main.h"

/**
 * get_bit- function
 * @n: input
 * @index: input
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* var declaration */
	unsigned int i;

	/* code */
	if (index > 64)
		return (-1);
	for (i = 0; i < index; i++)
		n >>= 1;
	return (n & 1);
}
