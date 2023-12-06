#include <stdio.h>

/**
 * main- prints alphabet but q or e
 *
 * Return: 0 always
 */
int main(void)
{
	/* var declaration */
	char c;

	/* code */
	for (c = 'a'; c <= 'z'; c++)
		if (c != 'q' && c != 'e')
			putchar(c);
	putchar('\n');
	return (0);
}
