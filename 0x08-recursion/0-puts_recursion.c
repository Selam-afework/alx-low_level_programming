#include "main.h"

/**
 * _puts_recursion - to print a string
 *
 * @s: string to be printed
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	int c =  0;

	while (s[c] != '0')
	{
		_putchar(c);
		c++;
	}
}
