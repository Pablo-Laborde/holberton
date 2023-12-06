#include "main.h"

/**
 * print_square- prints
 *
 * @size: input
 *
 * Return: void
 */
void print_square(int size)
{
	/* var declaration */
	int i, j;

	/* code */
	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
