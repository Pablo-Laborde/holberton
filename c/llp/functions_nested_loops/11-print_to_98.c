#include "main.h"

/**
 * print_to_98- prints numbers to 98
 *
 * @n: passed by main
 *
 * Return: void
 */
void print_to_98(int n)
{
	/* code */
	while (n != 98)
	{
		print_number(n);
		_putchar(',');
		_putchar(' ');
		if (n < 98)
			n++;
		else
			n--;
	}
	print_number(n);
	_putchar('\n');
}

/**
 * print_number- prints number
 *
 * @n: passed by others
 *
 * Return: void
 */
void print_number(int n)
{
	/* var declaration */
	int length, bt;

	/* code */
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	length = ln(n);
	while (length > 0)
	{
		bt = base_ten(length - 1);
		_putchar((n / bt) + '0');
		n %= bt;
		length--;
	}
}

/**
 * ln- to calculate the length
 *
 * @n: passed to calculate the length
 *
 * Return: length
 */
int ln(int n)
{
	/* var declaration */
	int length;

	/* code */
	length = 0;
	while (n > 9)
	{
		length++;
		n /= 10;
	}
	return (length + 1);
}

/**
 * base_ten- does 10^k
 *
 * @k: is the value (must be positive, function won't check)
 *
 * Return: 10^k
 */
int base_ten(int k)
{
	if (k == 0)
		return (1);
	else if (k == 1)
		return (10);
	else
		return (10 * base_ten(k - 1));
}
