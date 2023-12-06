#include <stdio.h>
#include "main.h"

/**
 * _strchr- function
 *
 * @s: input1
 * @c: input2
 *
 * Return: char *
 */
char *_strchr(char *s, char c)
{
	/* var decalration */
	int i, flag;

	/* code */
	i = 0;
	flag = 0;
	while (flag == 0)
	{
		if ((s[i] != '\0') && (s[i] != c))
			i++;
		if (s[i] == '\0')
			flag = 1;
		if (s[i] == c)
			flag = 2;
	}
	if (flag == 2)
		return (&(s[i]));
	else
		return (NULL);
}
