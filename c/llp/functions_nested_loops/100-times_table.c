#include <stdio.h>


void print_num(int n);
void print_comaspace(int n);

/**
 * print_times_table- prints n times table
 *
 * @n: passed
 *
 * Return: void
 */
void print_times_table(int n)
{
	/* var declaration */
	int i, j, k;

	/* code */
	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j == 0)
					print_num(k);
				else
				{
					print_comaspace(k);
					print_num(k);
				}
			}
			putchar('\n');
		}
	}
}

/**
 * print_num- prints number
 *
 * @n: passed
 *
 * Return: void
 */
void print_num(int n)
{
	if (n < 10)
		putchar(n + '0');
	else if (n < 100)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
	}
	else
	{
		putchar((n / 100) + '0');
		putchar(((n % 100) / 10) + '0');
		putchar((n % 10) + '0');
	}
}

/**
 * print_comaspace- prints coma and space
 *
 * @n: passed
 *
 * Return: void
 */
void print_comaspace(int n)
{
	/* var declaration */
	int i, k;

	/* code */
	putchar(',');
	if (n < 10)
		k = 3;
	else if (n < 100)
		k = 2;
	else
		k = 1;
	for (i = 0; i < k; i++)
		putchar(' ');
}
