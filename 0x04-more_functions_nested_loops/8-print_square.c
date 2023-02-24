#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square
 *
 * @size: the size of the square
 *
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int k;

	for (k = 0; k < size; k++)
	{
		int j;

		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
	if (size <= 0)
	{
		_putchar(10);
	}
}
