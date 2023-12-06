#include <stdio.h>
#include "main.h"

/**
 * _strstr- function
 *
 * @haystack: input1
 * @needle: input2
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	/* var declaration */
	int i, k, flag;

	/* code */
	i = 0;
	flag = 0;
	while ((haystack[i] != '\0') && (flag == 0))
	{
		if (needle[0] == '\0')
			flag = 1;
		if (haystack[i] == needle[0])
		{
			k = 0;
			while ((haystack[i + k] == needle[k]) && (haystack[i + k] != '\0')
					&& (needle[k] != '\0'))
				k++;
			if (needle[k] == '\0')
				flag = 2;
			else
				i++;
		}
		else
			i++;
	}
	if (flag == 2)
		return (&(haystack[i]));
	else if (flag == 1)
		return (haystack);
	else
		return (NULL);
}
