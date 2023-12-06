#include <stdio.h>
#include "main.h"

/**
 * _strspn- function
 *
 * @s: input1
 * @accept: input2
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	/* var declaration */
	int i, j, counter;

	/* code */
	i = 0;
	counter = 0;
	while (s[i] != '\0' && s[i] != ',' && s[i] != ' ' && s[i] != '.'
			&& s[i] != '!' && s[i] != '?' && s[i] != ')')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				counter++;
			j++;
		}
		i++;
	}
	return (counter);
}
