#include "main.h"

/**
 * print_rev - to print a string in a reverse order
 *
 * @s: a string to be printed
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int n = 0;

	int p;

	for (p = 0; s[p] != '\0'; p++)
	{
	}

	for (n = p - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
