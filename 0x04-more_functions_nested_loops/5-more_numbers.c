#include "main.h"
#include <stdio.h>

/**
 * more_numbers - printing numbers 10 times
 *
 * Return: Void
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int n;

		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}

				_putchar((n % 10) + '0');

		}
		_putchar('\n');
		i++;
	}
}
