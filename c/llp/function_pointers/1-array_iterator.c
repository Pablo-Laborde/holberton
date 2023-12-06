#include "function_pointers.h"

/**
 * array_iterator- function
 * @array: input1
 * @size: input2
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* var declaration */
	size_t i;

	/* code */
	if ((action != NULL) && (array != NULL))
		for (i = 0; i < size; i++)
			action(array[i]);
}
