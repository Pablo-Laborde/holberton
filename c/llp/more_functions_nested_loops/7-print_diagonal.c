#include "main.h"

/**
 * print_diagonal- prints
 *
 * @n: input
 *
 * Return: void
 */
void print_diagonal(int n)
{
	/* var declaration */
	int i, j;

	/* code */
	if (n > 0)
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
