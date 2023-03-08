#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 *
 * @s: pointer to the string
 *
 * Return: 0.
 */

int _strlen_recursion(char *s)
{
	int len;

	len = _strlen_recursion(s);

	_putchar(len);
}
