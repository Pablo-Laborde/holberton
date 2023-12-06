#include "variadic_functions.h"

/**
 * print_strings- function
 * @separator: input
 * @n: input
 * Return:
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/* var declaration */
	unsigned int i;
	char *c;
	va_list ap;

	/* code */
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(ap, char*);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if (i < (n - 1))
			if (separator != NULL)
				printf("%s", separator);
	}
	printf("\n");
}
