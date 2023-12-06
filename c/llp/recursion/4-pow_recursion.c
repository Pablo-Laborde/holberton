#include "main.h"

/**
 * _pow_recursion- function
 *
 * @x: input1
 * @y: input2
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else /* (y > 0) */
		return (x * _pow_recursion(x, (y - 1)));
}
