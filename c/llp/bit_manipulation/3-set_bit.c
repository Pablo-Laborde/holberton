#include "main.h"

/**
 * set_bit- function
 * @n: input
 * @index: input
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* var declaration */
	unsigned int i;
	unsigned long int m;

	/* code */
	if (n == NULL || index > 64)
	{
		return (-1);
	}
	else
	{
		m = 1;
		for (i = 0; i < index; i++)
			m <<= 1;
		*n = *n | m;
		return (1);
	}
}
