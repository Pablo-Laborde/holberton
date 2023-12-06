#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main- function
 *
 * @argc: input
 * @argv: input
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	/* var declaration */
	int n, sum;

	/* code */
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		n = atoi(argv[1]);
		sum = 0;
		if (n >= 0)
		{
			sum = 0;
			sum += (n / 25);
			n %= 25;
			sum += (n / 10);
			n %= 10;
			sum += (n / 5);
			n %= 5;
			sum += (n / 2);
			n %= 2;
			sum += (n / 1);
			n %= 1;
		}
		printf("%d\n", sum);
		return (0);
	}
}
