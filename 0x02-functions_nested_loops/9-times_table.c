#include "main.h"

/**
 * times_table - prints 9 times table'
 *
 * Return: Always 0 'Success'
 */

void times_table(void)
{
	int x, y;

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 10)
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
			y++;
			}
		}
		_putchar('\n');
		x++;
	}
}
