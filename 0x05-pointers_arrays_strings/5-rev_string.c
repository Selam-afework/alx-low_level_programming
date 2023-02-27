#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: variable to be reversed
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int m, n, p;

	char x1, x2;

	for (p = 0; s[p] != '\0'; p++)
	{
	}
	m = p - 1;
	n = 0;
	while (m > n)
	{
		x1 = s[n];
		x2 = s[m];
		s[n] = x2;
		s[m] = x1;
		m--;
		n++;
	}
}
