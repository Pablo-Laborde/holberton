#include "main.h"

/**
 * _strcpy- function
 *
 * @dest: input1
 * @src: input2
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	/* var declaration */
	int i, flag;

	/* code */
	i = 0;
	flag = 0;
	while (flag == 0)
	{
		if (src[i] == '\0')
			flag = 1;
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
