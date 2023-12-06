#include "main.h"


/**
 * print_alphabet- prints the alphabet fallowed by a new line
 *
 * Return: none as its void
 */
void print_alphabet(void)
{
	/* var decalarion */
	char c;

	/* code*/
	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
