#include <stdio.h>
#include "main.h"

/**
 * print_diagsums- function
 *
 * @a: input1
 * @size: input2
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	/* var declaration */
	int i, d1, d2;

	/* code */
	d1 = 0;
	d2 = 0;
	for (i = 0; i < size; i++)
	{
		d1 += a[i + (i * size)];
		d2 += a[(size - 1 - i) + (i * size)];
	}
	printf("%d, %d\n", d1, d2);
}
