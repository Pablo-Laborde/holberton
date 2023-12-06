#include "variadic_functions.h"

/**
 * print_numbers- function
 * @separator: input1
 * @n: input2
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* var declaration */
	unsigned int i;
	va_list ap;

	/* code */
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < (n - 1))
			if (separator != NULL)
				printf("%s", separator);
	}
	printf("\n");
}
