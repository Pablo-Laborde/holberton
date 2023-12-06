#include "main.h"

/**
 * puts_half- function
 *
 * @str: input
 *
 * Return: void
 */
void puts_half(char *str)
{
	/* var declaration */
	int i, j, k;

	/* code */
	i = 0;
	while (str[i] != '\0')
		i++;
	k = i - (i / 2);
	for (j = k; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
