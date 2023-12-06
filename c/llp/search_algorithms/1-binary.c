#include "search_algos.h"

/**
 * binary_search- searchs
 * @array: array
 * @size: size
 * @value: value
 * Return: pos if value exists, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	if (array)
		return (bin(array, 0, (size - 1), value));
	return (-1);
}

/**
 * bin- searchs
 * @array: array
 * @i: begin
 * @f: end
 * @value: value
 * Return: pos if value exists, -1 otherwise
 */
int bin(int *array, size_t i, size_t f, int value)
{
	size_t pos, k;

	if (f < i)
		return (-1);
	pos = (f + i) / 2;
	printf("Searching in array: ");
	for (k = i; k < f; k++)
		printf("%d, ", array[k]);
	printf("%d\n", array[f]);
	if (array[pos] == value)
		return (pos);
	if (array[pos] < value)
		return (bin(array, (pos + 1), f, value));
	else
		return (bin(array, i, (pos - 1), value));
}
