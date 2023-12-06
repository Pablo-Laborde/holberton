#include <stdio.h>

/**
 * main- prints the alphabet in lowercase and uppercase
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
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
