#include "main.h"

/**
 * print_times_table - prints n times table starting with 0
 * @n: number being evaluated
 *
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	int p, z;

	if ((n >= 0) && (n <= 15))
	{
		for (p = 0; p <= n; p++)
		{
			int z = (n * p);

			if (z < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else if ((z >= 10) && (z < 100))
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			else if (z >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 100) + '0');
				_putchar(((z / 10) % 10) + '0');
				_putchar((z % 10) + '0');
			}
		}
		n++;
		_putchar('\n');
	}
}
