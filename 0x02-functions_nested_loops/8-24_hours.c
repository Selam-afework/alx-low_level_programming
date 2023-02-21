#include "main.h"

/**
 * jack_bauer - to print every minute of the day
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int x = 0 y = 0; 
	while (x < 24)
	{
		_putchar('0' + x);
		if (y < 59)
		{
			_putchar(':');
			_putchar('0' + y);
		}
		_putchar('\n');
		y++
	}
	x++

}
