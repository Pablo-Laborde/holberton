#include <stdio.h>

/**
 * main- prints all the numbers of base 16 in lowercase
 *
 * Return: 0 always
 */
int main(void)
{
	/* var declaration */
	int i;
	char c;

	/* code */
	for (i = 0; i < 10; i++)
		putchar((char)(i + '0'));
	for (c = 'a'; c  <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
