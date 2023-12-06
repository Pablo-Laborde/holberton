#include "main.h"

/**
 * _memset- function
 *
 * @s: input1
 * @b: input2
 * @n: input3
 *
 * Return: char*
 */
char *_memset(char *s, char b, unsigned int n)
{
	/* var declaration */
	unsigned int i;

	/* code */
	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
