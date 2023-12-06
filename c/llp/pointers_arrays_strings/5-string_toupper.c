#include "main.h"

/**
 * string_toupper- function
 *
 * @c: input
 *
 * Return: char*
 */
char *string_toupper(char *c)
{
	/* var declaration */
	int i;

	/* code */
	i = 0;
	while (c[i] != '\0')
	{
		if ((c[i] >= 'a') && (c[i] <= 'z'))
			c[i] -= ('a' - 'A');
		i++;
	}
	return (c);
}
