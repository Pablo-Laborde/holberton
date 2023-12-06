#include "main.h"

/**
 * reverse_array- function
 *
 * @a: input1
 * @n: input2
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	/* var declaration */
	int i, pos, aux;

	/* code */
	for (i = 0; i < (n / 2); i++)
	{
		aux = a[i];
		pos = n - 1 - i;
		a[i] = a[pos];
		a[pos] = aux;
	}
}
