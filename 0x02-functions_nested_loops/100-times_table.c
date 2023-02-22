#include "main.h"

/**
 * print_times_table - prints n times table starting with 0
 * @n: number being evaluated
 *
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	for (n = 0; n < 15; n++)
	{
		int p = n;

		for (p = 0; p++)
		{
			int z = (n * p);

			if (z < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else if (z >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
