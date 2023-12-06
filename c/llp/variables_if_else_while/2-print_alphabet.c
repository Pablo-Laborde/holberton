#include <stdio.h>

/**
 * main- prints the alphabet
 *
 * Return: 0 always
 */
int main(void)
{
	/* var declaration */
	char c;

	/* functions */
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
