#include "main.h"

/**
 * is_prime_number- function
 *
 * @n: input
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (is_prime_aux(n, 2));
}

/**
 * is_prime_aux- function
 *
 * @n: input1
 * @b: input2
 *
 * Return: int
 */
int is_prime_aux(int n, int b)
{
	if ((n % b) == 0)
		return (0);
	else if (b < (n / 2))
		return (is_prime_aux(n, (b + 1)));
	else
		return (1);
}
