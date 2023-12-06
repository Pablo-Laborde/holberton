#include "main.h"

/**
 * _isalpha- checks if the char is alphabetic
 *
 * @c: passed by main
 *
 * Return: if true 1, else 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
