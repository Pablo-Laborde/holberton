#include <stdlib.h>
#include "main.h"

/**
 * _calloc- function
 *
 * @nmemb: input1
 * @size: input2
 *
 * Return: void*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* var declaration */
	int i, len;
	char *pointer;

	/* code */
	pointer = NULL;
	if ((nmemb > 0) && (size > 0))
	{
		len = nmemb * size;
		pointer = malloc(len);
		if (pointer != NULL)
			for (i = 0; i < len; i++)
				pointer[i] = 0;
	}
	return (pointer);
}
