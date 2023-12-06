#include "main.h"

/**
 * rev_string- function
 *
 * @s: input
 *
 * Return: void
 */
void rev_string(char *s)
{
	/* var declaration */
	int i, j, k;

	/* code */
	i = 0;
	while (s[i] != '\0')
		i++;
	for (j = 0; j < (i / 2); j++)
	{
		k = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = k;
	}
}
