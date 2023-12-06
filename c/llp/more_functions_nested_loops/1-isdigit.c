#include "main.h"

/**
 * _isdigit- checks if input is digit
 *
 * @c: input
 *
 * Return: if true 1, else 0
 */
int _isdigit(int c)
{
	/* var declaration */
	int flag;

	/* code */
	if (c >= '0' && c <= '9')
		flag = 1;
	else
		flag = 0;
	return (flag);
}
