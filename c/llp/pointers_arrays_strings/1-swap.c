#include "main.h"

/**
 * swap_int- function
 *
 * @a: input1
 * @b: input2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
