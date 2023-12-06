#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main- CHecks if last digit of random number is 0
 *
 * Return: 0 always
 */
int main(void)
{
	int n;
	int m;
	char *s1;
	char *s2;
	char *s3;
	char *s4;
	char *s5;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	s1 = "Last digit of";
	s2 = "is";
	s3 = "and is greater than 5\n";
	s4 = "and is 0\n";
	s5 = "and is less than 6 and not 0\n";

	if (m > 5)
	{
		printf("%s %i %s %i %s", s1, n, s2, m, s3);
	}
	else if (m == 0)
	{
		printf("%s %i %s %i %s", s1, n, s2, m, s4);
	}
	else
	{
		printf("%s %i %s %i %s", s1, n, s2, m, s5);
	}
	return (0);
}
