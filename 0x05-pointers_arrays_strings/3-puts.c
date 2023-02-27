#include "main.h"

/**
 * _puts - a function that prints a string
 *
 * @str: a string to be printed
 *
 * Return: Always 0 (Sucess)
 */

void _puts(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
	}
}	
