#include <stdio.h>
#include "main.h"

/**
 * print_array- function
 *
 * @a: input1
 * @n: input2
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	/* var declaration */
	int i;

	/* code */
	for (i = 0; i < n; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");
}
