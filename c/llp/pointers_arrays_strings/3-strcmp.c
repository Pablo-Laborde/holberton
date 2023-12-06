#include "main.h"

/**
 * _strcmp- function
 *
 * @s1: input1
 * @s2: input2
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	/* var declaration */
	int i;

	/* code */
	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
