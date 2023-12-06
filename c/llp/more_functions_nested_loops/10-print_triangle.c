#include "main.h"

/**
 * print_triangle- prints
 *
 * @size:
 *
 * Return: void
 */
void print_triangle(int size)
{
	/* var declaration */
	int i, j, k;

	/* code */
	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < (size - 1 - i); j++)
				_putchar(' ');
			for (k = (size - 1 - i); k < size; k++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}

