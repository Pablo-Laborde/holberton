#include <stdio.h>
#include "main.h"

/**
 * _strpbrk- function
 *
 * @s: input1
 * @accept: input2
 *
 * Return: char*
 */
char *_strpbrk(char *s, char *accept)
{
	/* var declaration */
	int i, j, flag;

	/* code */
	i = -1;
	flag = 0;
	do {
		i++;
		j = 0;
		while ((accept[j] != '\0') && (flag == 0))
			if (s[i] == accept[j])
				flag = 1;
			else
				j++;
	} while ((s[i] != '\0') && (flag == 0));
	if (flag == 1)
		return (&(s[i]));
	else
		return (NULL);
}
