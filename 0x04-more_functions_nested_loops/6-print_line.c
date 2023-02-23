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
	int k;

	for (k = 0; k < n; k++)
	{
		_putchar(95);
	}
	_putchar(10);
}
