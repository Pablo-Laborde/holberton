#include <stdio.h>

/**
 * main- prints the lowercase alphabet in reverse
 *
 * Return: 0 always
 */
int main(void)
{
	/* var declaration */
	char c;

	/* code */
	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
