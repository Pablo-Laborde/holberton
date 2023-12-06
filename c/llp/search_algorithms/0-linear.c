#include "search_algos.h"

/**
 * linear_search- searchs
 * @array: array
 * @size: size
 * @value: value to look for
 * Return: pos if exists, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t pos;

	if (array)
	{
		for (pos = 0; pos < size; pos++)
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] == value)
				return (pos);
		}
	}
	return (-1);
}
