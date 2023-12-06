#include "main.h"

/**
 * binary_to_uint- function
 * @b: input
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	/* var declaration */
	int pos, len;
	unsigned int num;

	/* code */
	if (b == NULL)
	{
		return (0);
	}
	else
	{
		len = 0;
		while (b[len] != '\0')
		{
			if (b[len] < '0' || b[len] > '1')
				return (0);
			len++;
		}
		num = 0;
		for (pos = 0; pos < len; pos++)
			num += ((b[pos] - '0') * two_pow(len - 1 - pos));
		return (num);
	}
}

/**
 * two_pow- function
 * @n: input
 * Return: unsigned int
 */
unsigned int two_pow(int n)
{
	if (n == 0)
		return (1);
	else
		return (2 * two_pow(n - 1));
}
