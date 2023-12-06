#include <stdio.h>

/**
 * main- prints even numbers in fibonacci serie
 *
 * Return: 0 always
 */
int main(void)
{
	/* var declaration */
	int i, j, aux, sum;

	/* code */
	i = 1;
	j = 2;
	sum = 0;
	while (j < 4000000)
	{
		if (j % 2 == 0)
			sum += j;
		aux = i + j;
		i = j;
		j = aux;
	}
	printf("%d\n", sum);
	return (0);
}
