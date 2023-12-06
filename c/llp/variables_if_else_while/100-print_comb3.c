#include <stdio.h>

/**
 * main- prints all the possible combinations of two digits
 *
 * Return: 0 always
 */
int main(void)
{
	/* var declaration */
	int i, j, max;

	/* code */
	max = 10;
	for (i = 0; i < max - 1; i++)
		for (j = (i + 1); j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if ((i + 2) < max)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
