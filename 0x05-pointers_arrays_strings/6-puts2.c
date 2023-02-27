#include "main.h"

/**
 * puts2 - prints every other character
 *
 * @str: a variable to be printed
 *
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	char *ptr = str;
	
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(*ptr);
		ptr += 2;
	}
	_putchar('\n');
}
