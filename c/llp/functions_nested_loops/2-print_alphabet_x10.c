#include "main.h"

/**
 * print_alphabet_x10- print 10 times the alphabet fallowed by a new line
 *
 * Return: none asi its void
 */
void print_alphabet_x10(void)
{
	/* var declaration */
	int i;
	char c;

	/* code */
	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
