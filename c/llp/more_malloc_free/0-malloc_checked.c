#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked- function
 *
 * @b: input
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	/* var declaration */
	void *pointer;

	/* code */
	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	else
		return (pointer);
}
