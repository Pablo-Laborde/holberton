#include "main.h"

/**
 * print_number- prints
 *
 * @n: input
 *
 * Return: void
 */
void print_number(int n)
{
	/* var declaration */
	int length, bt, c;

	/* code */
	if (n < 0)
		_putchar('-');
	length = get_length(n);
	while (length > 0)
	{
		bt = base_ten(length - 1);
		if (n < 0)
			c = -1 * (n / bt);
		else
			c = n / bt;
		_putchar(c + '0');
		n %= bt;
		length--;
	}
}

/**
 * get_length- calculates the length
 *
 * @n: input
 *
 * Return: length
 */
int get_length(int n)
{
	/* var declaration */
	int length;

	/* code */
	length = 0;
	do {
		length++;
		n /= 10;
	} while (n != 0);
	return (length);
}

/**
 * base_ten- base ten
 *
 * @n: input
 *
 * Return: base ten
 */
int base_ten(int n)
{
	if (n == 0)
		return (1);
	else if (n == 1)
		return (10);
	else
		return (10 * base_ten(n - 1));
}
