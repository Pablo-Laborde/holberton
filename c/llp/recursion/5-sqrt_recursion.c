#include "main.h"

/**
 * _sqrt_recursion- fucntion
 *
 * @n: input
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (_sqrt_recursion_aux(n, 2));
}

/**
 * _sqrt_recursion_aux-function
 *
 * @n: input1
 * @b: input2
 *
 * Return: int
 */
int _sqrt_recursion_aux(int n, int b)
{
	if ((b * b) == n)
		return (b);
	else if (b < (n / 2))
		return (_sqrt_recursion_aux(n, (b + 1)));
	else
		return (-1);
}
