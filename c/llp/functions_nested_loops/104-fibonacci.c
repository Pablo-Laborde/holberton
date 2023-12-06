#include <stdio.h>

/**
 * main- prints fiibonacci etc
 *
 * Return: 0 always
 */
int main(void)
{
	/* var declaration */
	long int aux, f11, f12, f21, f22, f31, f32;
	int counter;

	/* code */
	f11 = 0;
	f12 = 1;
	f21 = 0;
	f22 = 2;
	printf("%ld, %ld", f12, f22);
	counter = 2;
	while (counter < 98)
	{
		aux = f12 + f22;
		f31 = f11 + f21 + aux / 10000000000;
		f32 = aux % 10000000000;
		printf(", ");
		if (f31 > 0)
			printf("%ld%010ld", f31, f32);
		else
			printf("%ld", f32);
		counter++;
		f11 = f21;
		f12 = f22;
		f21 = f31;
		f22 = f32;
	}
	printf("\n");
	return (0);
}
