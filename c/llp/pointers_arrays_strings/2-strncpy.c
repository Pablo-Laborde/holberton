#include <stdio.h>
#include "main.h"

/**
 * _strncpy- function
 *
 * @dest: input1
 * @src: input2
 * @n: input3
 *
 * Return: char*
 */
char *_strncpy(char *dest, char *src, int n)
{
	/* var decalration */
	int i;

	/* code */
	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	for (i = i; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
