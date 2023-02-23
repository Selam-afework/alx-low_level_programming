#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - to print a diagonal line
 *
 * @n: number of times it should be printed
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		int j;

		for (j = 0; j < k; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar(10);
	}
	if (n <= 0)
	{
		_putchar(10);
	}
}
