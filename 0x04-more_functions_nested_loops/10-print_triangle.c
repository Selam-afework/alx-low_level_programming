#include "main.h"
#include <stdio.h>

/**
 * print_triangle - printing a triangle
 *
 * @size: size of the triangle
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int k;

	for (k = size - 1; k > 0; k--)
	{
		_putchar(32);
	}
	int j;

	for (j = 0; j < size; j++)
	{
		_putchar(35);
		_putchar(10);
	}
	if (size <= 0)
	{
		_putchar(10);
	}
}
