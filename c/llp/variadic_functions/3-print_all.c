#include "variadic_functions.h"

void print_char(va_list ap);
void print_int(va_list ap);
void print_float(va_list ap);
void print_string(va_list ap);

/**
 * print_all- function
 * @format: input
 * Return: void
 */
void print_all(const char * const format, ...)
{
	/* var declaration */
	int i, j;
	char *s1;
	va_list ap;
	void (*f)(va_list);
	tpf_t arr[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	/* code */
	i = 0;
	s1 = "";
	va_start(ap, format);
	while ((format != NULL) && (format[i] != '\0'))
	{
		j = 0;
		while (arr[j].c != NULL)
		{
			if (format[i] == arr[j].c[0])
			{
				f = arr[j].f;
				printf("%s", s1);
				(*f)(ap);
				s1 = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}

/**
 * print_char- function
 * @ap: input
 * Return:void
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int- function
 * @ap: input
 * Return:void
 */
void print_int(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * print_float- function
 * @ap: input
 * Return:void
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string- function
 * @ap: input
 * Return:void
 */
void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char*);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
