#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: integer to be converted
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	int x, y, z;
	
	x = 31;

	y = 0;

	while (x >= 0)
	{
		z = n >> x;

		if (z & 1)
		{
			_putchar(49);
			y++;
		}
		else
		{
			_putchar(48);
		}
		x--;
	}
}
