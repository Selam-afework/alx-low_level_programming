#include "main.h"
#include <stdio.h>

/**
 * _atoi - to convert a string to an integer
 *
 * @s: a string to be converted
 *
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int i;

	int sign = 1, num = 0;

	for (!(s[i] >= '0' && s[i] <= '9'); s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
	}

	for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
	{
		num = num * 10 + (s[i] - '0');
	}
	num *= sign;
	return (num);
}
