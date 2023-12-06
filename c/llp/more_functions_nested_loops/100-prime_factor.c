#include <stdio.h>

/**
 * main- prints
 *
 * Return: 0 always
 */
int main(void)
{
	/* var declaration */
	long n, i;

	/* code */
	n = 612852475143;
	i = 2;
	while (i < (n / 2))
	{
		if (n % i == 0)
			n /= i;
		else
			i++;
	}
	printf("%li\n", n);
	return (0);
}
