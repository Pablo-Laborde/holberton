#include "function_pointers.h"

/**
 * int_index- function
 * @array: input1
 * @size: input2
 * @cmp: function pointer
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	/* var declaration */
	int i;

	/* code */
	if (size <= 0)
		return (-1);
	if ((cmp != NULL) && (array != NULL))
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
		return (-1);
	}
	return (-1);
}
