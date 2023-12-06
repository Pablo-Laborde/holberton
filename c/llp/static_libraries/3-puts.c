#include "main.h"

/**
 * _puts- function
 *
 * @s: input
 *
 * Return: void
 */
void _puts(char *s)
{
	/* var declaration */
	int i;

	/* code */
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
