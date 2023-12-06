#include <stdio.h>





void print_number(int n);

/**
 * main- prints all possible combinations of two numbers od two digits each
 *
 *
 * Return: 0 always
 */
int main(void)
{
	/* var declaration */
	int i, j, max;

	max = 100;
	for (i = 0; i < (max - 1); i++)
		for (j = (i + 1); j < max; j++)
		{
			if (i < j)
			{
				print_number(i);
				putchar(' ');
				print_number(j);
				if ((i + 2) != max)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');
	return (0);
}

/**
 * print_number- prints a number
 *
 * @n: variable passed
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 10)
		putchar('0');
	else
		putchar((n / 10) + '0');
	putchar((n % 10) + '0');
}
