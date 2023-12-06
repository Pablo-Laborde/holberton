#include "main.h"

/**
 * jack_bauer- prints every minute of  a day
 *
 * Return: void
 */
void jack_bauer(void)
{
	/* var declaration */
	int hh;
	int min;

	/* code */
	hh = 0;
	min = 0;
	while (hh != 24)
	{
		_putchar((hh / 10) + '0');
		_putchar((hh % 10) + '0');
		_putchar(':');
		_putchar((min / 10) + '0');
		_putchar((min % 10) + '0');
		_putchar('\n');
		if (min < 59)
			min++;
		else
		{
			min = 0;
			hh++;
		}
	}
}
