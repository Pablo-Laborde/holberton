#include "main.h"

/**
 * _isupper- checks if input is uppercase
 *
 * @c: input
 *
 * Return: if true 1, else 0
 */
int _isupper(int c)
{
	/* var declaration */
	int flag;

	/* code */
	if (c >= 'A' && c <= 'Z')
		flag = 1;
	else
		flag = 0;
	return (flag);
}
