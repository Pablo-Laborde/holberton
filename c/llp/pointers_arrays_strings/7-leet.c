#include "main.h"

/**
 * leet(char *c)- function
 *
 * @c: input1
 *
 * Return: char*
 */
char *leet(char *c)
{
	/* var declaration */
	int i, j;
	char arr[8] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};

	/* code */
	i = 0;
	while (c[i] != '\0')
	{
		for (j = 0; j < 8; j++)
			if ((c[i] == arr[j]) || (c[i] == (arr[j] - 'a' + 'A')))
				c[i] = j + '0';
		i++;
	}
	return (c);
}
