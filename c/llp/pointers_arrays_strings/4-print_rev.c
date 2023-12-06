#include "main.h"

/**
 * print_rev- function
 *
 * @s: input
 *
 * Return: void
 */
void print_rev(char *s)
{
	print_rev_rec(s);
	_putchar('\n');
}

/**
 * print_rev_rec- fucntion
 *
 * @s: input
 *
 * Return: void
 */
void print_rev_rec(char *s)
{
	if (s[0] != '\0')
	{
		print_rev_rec(&(s[1]));
		_putchar(s[0]);
	}
}
