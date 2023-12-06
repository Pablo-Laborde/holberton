#include "main.h"

/**
 * _memcpy- function
 *
 * @dest: input1
 * @src: input2
 * @n: input3
 *
 * Return: char *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* var declaration */
	unsigned int i;

	/* code */
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
