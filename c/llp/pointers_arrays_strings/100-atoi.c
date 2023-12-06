#include "main.h"

/**
 * _atoi(char *s)- function
 *
 * @s: input
 *
 * Return: int
 */
int _atoi(char *s)
{
	/* var declaration */
	int flag, sign, num, i;

	/* code */
	flag = 0;
	sign = 1;
	num = 0;
	i = 0;
	while (flag == 0)
	{
		if (s[i] == '\0')
			flag = 1;
		else
		{
			if (s[i] == '-')
				sign *= -1;
			if ((s[i] >= '0') && (s[i] <= '9'))
			{
				while ((s[i] >= '0') && (s[i] <= '9'))
				{
					if (sign == 1)
					{
						num *= 10;
						num += (s[i] - 48);
					}
					else
					{
						num *= 10;
						num -= (s[i] - 48);
					}
					i++;
				}
				flag = 1;
			}
		}
		i++;
	}
	return (num);
}
