#include "main.h"

/**
 * _abs- computes the absolute value of an integer
 *
 * @n: passed by main
 *
 * Return: the absolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
