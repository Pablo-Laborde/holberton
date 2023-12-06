#include <stdio.h>

/**
 * main- prints digits from 0 to 9
 *
 * Return: 0 always
 */
int main(void)
{
	/* var declaration */
	int i;

	/* code */
	for (i = 0; i < 10; i++)
		putchar(((char)(i + '0')));
	putchar('\n');
	return (0);
}
