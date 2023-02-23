#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: Void
 */

void print_numbers(void)
{
	int i;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
}
