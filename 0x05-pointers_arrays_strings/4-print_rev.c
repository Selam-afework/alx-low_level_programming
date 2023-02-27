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
	char *ptr = s;

	while (*ptr == '\0')
	{
		_putchar(*ptr);
		ptr--;
	}
	_putchar('\n');
}
