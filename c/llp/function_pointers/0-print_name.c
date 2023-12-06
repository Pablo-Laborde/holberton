#include "function_pointers.h"
/**
 * print_name- function
 * @name: input1
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	/* code */
	if (f != NULL)
		f(name);
}
