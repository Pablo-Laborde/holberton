#include "3-calc.h"

/**
 * main- function
 * @argc: input
 * @argv: input
 * Return: int
 */
int main(int argc, char **argv)
{
	/* var declaration */
	int a, b;
	int (*f)(int, int);

	/* code */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if ((f == NULL) || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", (*f)(a, b));
	return (0);
}
