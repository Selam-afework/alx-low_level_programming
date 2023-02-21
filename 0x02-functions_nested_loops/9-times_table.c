#include "main.h"

/**
 * times_table - prints 9 times table'
 *
 * Return: Always 0 'Success'
 */

void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			int z = (x * y);

			if (y == 0)
			{
				_putchar(z + '0');
			}
			if ((z < 10) && (y != 0))
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
