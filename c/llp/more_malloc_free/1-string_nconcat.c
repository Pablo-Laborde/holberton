#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat- function
 *
 * @s1: input1
 * @s2: input2
 * @n: input3
 *
 * Return: char*
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* var declaration */
	unsigned int i, j, k, l, len;
	char *string;

	/* code */
	string = NULL;
	i = 0;
	if (s1 != NULL)
		while (s1[i] != '\0')
			i++;
	j = 0;
	if (s2 != NULL)
		while (s2[j] != '\0')
			j++;
	if (j <= n)
		len = i + j + 1;
	else
		len = i + n + 1;
	string = malloc(len);
	if (string != NULL)
	{
		for (k = 0; k < i; k++)
			string[k] = s1[k];
		for (l = 0; l < (len - i - 1); l++)
			string[k + l] = s2[l];
		string[k + l] = '\0';
	}
	return (string);
}
