#include "main.h"

/**
 * times_table- 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	/* var declaration */
	int i, j, k, x, y;

	/* code */
	i = 0;
	j = 0;
	while (i < 10 && j < 10)
	{
		k = i * j;
		if (j > 0 && j < 10)
		{
			_putchar(',');
			y = (k < 10) ? 2 : 1;
			for (x = 0; x < y; x++)
				_putchar(' ');
		}
		if (k < 10)
			_putchar(k + '0');
		else
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
		}
		if (j < 9)
			j++;
		else
		{
			i++;
			j = 0;
			_putchar('\n');
		}
	}
}
