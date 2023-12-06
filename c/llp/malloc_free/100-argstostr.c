#include "main.h"
#include <stdlib.h>

/**
 * argstostr- function
 * @ac: input1
 * @av: input2
 * Return: void
 */
char *argstostr(int ac, char **av)
{
	/* var declaration */
	int i, j, k, length;
	char *c;

	/* code */
	if (ac == 0 || av == NULL)
		return (NULL);
	length = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		length += j;
	}
	length += (ac + 1);
	c = malloc(sizeof(char) * length);
	if (c == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			c[k] = av[i][j];
			j++;
			k++;
		}
		c[k] = '\n';
		k++;
	}
	c[k] = '\0';
	return (c);
}
