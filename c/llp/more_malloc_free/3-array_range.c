#include <stdlib.h>
#include "main.h"

/**
 * array_range- function
 *
 * @min: input1
 * @max: input2
 *
 * Return: int
 */
int *array_range(int min, int max)
{
	/* var declaration */
	int i, len;
	int *pointer;

	/* code */
	pointer = NULL;
	if (max >= min)
	{
		len = max - min + 1;
		pointer = malloc(sizeof(int) * len);
		if (pointer != NULL)
			for (i = 0; i < len; i++)
				pointer[i] = min + i;
	}
	return (pointer);
}
