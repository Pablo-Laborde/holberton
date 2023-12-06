#include <stdio.h>

/**
 * main- prints all combinations possibles fo 3 digits
 *
 * Return: 0 always
 */
int main(void)
{
	/* var declaration */
	int i, j, k, max;

	/* code */
	max = 10;
	for (i = 0; i < (max - 2); i++)
		for (j = (i + 1); j < (max - 1); j++)
			for (k = (j + 1); k < max; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if ((i + 3) != max)
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
