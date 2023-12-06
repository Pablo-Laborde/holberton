#include "variadic_functions.h"

/**
 * sum_them_all- function
 * @n: input
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	/* var declaration */
	unsigned int i;
	int sum;
	va_list list;

	/* code */
	sum = 0;
	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
