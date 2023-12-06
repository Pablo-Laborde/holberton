#include "main.h"

/**
 * _puts(char *str)- function
 *
 * @str: input
 *
 * Return: void
 */
void _puts(char *str)
{
	/* var declaration */
	int i;

	/* code */
	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
