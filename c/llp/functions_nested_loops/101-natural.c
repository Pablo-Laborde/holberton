#include <stdio.h>

/**
 * main- sums all the numbers multiple of 3 and 5 below 1024
 *
 * Return: void
 */
int main(void)
{
	/* var declaration */
	int i, sum;

	/* code */
	sum = 0;
	for (i = 1; i < 1024; i++)
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	printf("%d\n", sum);
	return (0);
}
