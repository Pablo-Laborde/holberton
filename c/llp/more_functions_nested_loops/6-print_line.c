#include "main.h"

/**
 * print_line- prints lines
 *
 * @n: input
 *
 * Return: void
 */
void print_line(int n)
{
	/* var declaration */
	int i;

	/* code */
	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
