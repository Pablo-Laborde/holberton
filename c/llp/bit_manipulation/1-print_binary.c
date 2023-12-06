#include "main.h"

/**
 * print_binary- function
 * @n: input
 * Return: void
 */
void print_binary(unsigned long int n)
{
	/* var declaration */
	char c;

	/* code */
	c = '0';
	if (n == 0)
		write(1, &c, 1);
	else
		print(n);
}

/**
 * print- function
 * @n: input
 * Return: void
 */
void print(unsigned long int n)
{
	/* var declaration */
	char c;

	/* code */
	if (n != 0)
	{
		print(n >> 1);
		c = ('0' + (n & 1));
		write(1, &c, 1);
	}
}
