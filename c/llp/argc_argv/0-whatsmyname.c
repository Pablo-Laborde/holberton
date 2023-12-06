#include <stdio.h>
#include "main.h"

/**
 * main- function
 *
 * @argc: input1
 * @argv: input2
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
