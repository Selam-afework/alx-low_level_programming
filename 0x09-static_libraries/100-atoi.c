#include "main.h"

/**
 * _atoi - to convert a string to an integer
 *
 * @s: a string to be converted
 *
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int i = 0;

	int sign = 1, num = 0;

	if (s[i] == '-')
	{
		sign *= -1;
		i++;
	}

	for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
	{
		num = num * 10 + (s[i] - '0');
	}
	num *= sign;
	return (num);
}
