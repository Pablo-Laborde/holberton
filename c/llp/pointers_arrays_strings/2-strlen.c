#include "main.h"

/**
 * _strlen- function
 *
 * @s: input
 *
 * Return: int
 */
int _strlen(char *s)
{
	/* var declaration */
	int i, counter;

	/* code */
	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}
