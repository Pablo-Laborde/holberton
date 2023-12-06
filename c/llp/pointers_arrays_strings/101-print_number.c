#include "main.h"

/**
 * print_number- function
 *
 * @n: input
 *
 * Return: void
 */
void print_number(int n)
{
	/* var declaration */
	int i, j, len, bt;

	/* code */
	i = n;
	len = 0;
	do {
		i /= 10;
		len++;
	} while (i != 0);
	if (n < 0)
		_putchar('-');
	for (j = (len - 1); j >= 0; j--)
	{
		bt = base_ten(j);
		if (n < 0)
			_putchar((-1 * (n / bt)) + '0');
		else
			_putchar((n / bt) + '0');
		n %= bt;
	}
}

/**
 * base_ten- function
 *
 * @len: input
 *
 * Return: int
 */
int base_ten(int len)
{
	if (len == 0)
		return (1);
	else
		return (10 * base_ten(len - 1));
}
