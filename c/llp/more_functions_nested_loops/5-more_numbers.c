#include "main.h"

/**
 * more_numbers- prints
 *
 * Return: void
 */
void more_numbers(void)
{
	/* var declaration */
	int i, x;

	/* code */
	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x > 9)
				_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
