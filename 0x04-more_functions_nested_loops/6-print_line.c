#include "main.h"
#include <stdio.h>

/**
 * print_line - printing straight line
 *
 * @n: number of times it should be printed
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	n = 0;
	if (n > 0)
	{
		_putchar(95);
		n--;
	}
	else if (n <= 0)
	{
		_putchar(10);
	}
}
