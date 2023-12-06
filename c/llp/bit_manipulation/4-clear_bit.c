#include "main.h"

/**
 * clear_bit- function
 * @n: input
 * @index: input
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* var declaration */
	unsigned long int num;

	/* code */
	if (n == NULL || index > 64)
	{
		return (-1);
	}
	else
	{
		num = 1;
		num <<= index;
		*n = ((*n | num) ^ num);
		return (1);
	}
}
