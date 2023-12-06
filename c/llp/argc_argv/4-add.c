#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main- function
 *
 * @argc: input
 * @argv: input
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	/* var declaration */
	int i, sum, flag;

	/* code */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		i = 1;
		sum = 0;
		flag = 0;
		while ((i < argc) && (flag == 0))
		{
			flag = int_check(argv[i]);
			if (flag == 0)
				sum += strtoint(argv[i]);
			i++;
		}
		if (flag == 1)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			printf("%d\n", sum);
			return (0);
		}
	}
}

/**
 * int_check- function
 *
 * @c: input
 *
 * Return: int
 */
int int_check(char *c)
{
	/* var declaration */
	int i, flag;

	/* code */
	i = 0;
	flag = 0;
	while ((c[i] != '\0') && (flag == 0))
		if ((c[i] < '0') || (c[i] > '9'))
			flag = 1;
		else
			i++;
	return (flag);
}

/**
 * strtoint- function
 *
 * @c: input
 *
 * Return: int
 */
int strtoint(char *c)
{
	/* var declaration */
	int i, sum, sign;

	/* code */
	i = 0;
	sum = 0;
	if (c[0] == '-')
	{
		sign = -1;
		i++;
	}
	else
		sign = 1;
	while (c[i] != '\0')
	{
		sum *= 10;
		if (sign == 1)
			sum += (c[i] - '0');
		else
			sum -= (c[i] - '0');
		i++;
	}
	return (sum);
}
