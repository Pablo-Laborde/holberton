#include <stdlib.h>
#include "main.h"

/**
 * create_array- function
 *
 * @size: input1
 * @c: input2
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	/* var declaration */
	unsigned int i;
	char *string;

	/* code */
	if (size > 0)
	{
		string = malloc(size * sizeof(c));
		if (string != NULL)
			for (i = 0; i < size; i++)
				string[i] = c;
	}
	else
		string = NULL;
	return (string);
}
