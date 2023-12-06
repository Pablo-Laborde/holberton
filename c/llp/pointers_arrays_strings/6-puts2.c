#include "main.h"

/**
 * puts2- function
 *
 * @str: input
 *
 * Return: void
 */
void puts2(char *str)
{
	/* var declaration */
	int i;

	/* code */
	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
