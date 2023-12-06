#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup- function
 *
 * @str: input
 *
 * Return: char
 */
char *_strdup(char *str)
{
	/* var declaration */
	int i, j;
	char *string;

	/* code */
	string = NULL;
	if (str != NULL)
	{
		i = 0;
		while (str[i] != '\0')
			i++;
		string = malloc(i + 1);
		if (string != NULL)
			for (j = 0; j < (i + 1); j++)
				string[j] = str[j];
	}
	return (string);
}
