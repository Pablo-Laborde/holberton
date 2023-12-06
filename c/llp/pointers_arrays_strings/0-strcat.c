#include "main.h"

/**
 * _strcat- function
 *
 * @dest: input1
 * @src: input2
 *
 * Return: char*
 */
char *_strcat(char *dest, char *src)
{
	/* var declaration */
	int i, j;

	/* code */
	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	do {
		dest[i] = src[j];
		i++;
		j++;
	} while (src[j - 1] != '\0');
	return (dest);
}
