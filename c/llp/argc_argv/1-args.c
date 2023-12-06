#include <stdio.h>
#include "main.h"

/**
 * main- function
 *
 * @argc: input
 * @argv: input
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	if (argv[0] != NULL)
		printf("%d\n", (argc - 1));
	return (0);
}
