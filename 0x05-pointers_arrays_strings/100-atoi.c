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

	int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		num = num * 10 + (s[i] - 48);
	}
	printf("%d\n", num);
	return ( );
}
