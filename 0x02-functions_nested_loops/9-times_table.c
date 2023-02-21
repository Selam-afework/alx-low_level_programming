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
			int z =(x * y);
			_putchar(z + '0');
			_putchar(',');
			_putchar(' ');
			y++;
		}
		_putchar('\n');
		x++;
	}
}
