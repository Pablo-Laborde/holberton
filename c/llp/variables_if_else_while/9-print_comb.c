#include <stdio.h>

/**
 * main- prints all possible combinations of single-digit
 * numbers
 *
 * Return: 0 always
 */
int main(void)
{
	/* var declaration */
	int i;

	/* code */
	i = 0;
	do {
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
		i++;
	} while (i < 10);
	return (0);
}
