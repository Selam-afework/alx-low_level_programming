#include "main.h"

/**
 * print_sign - a function printing the sign of the number
 *
 * @n: a number being evaluated
 *
 * Return: Always 0 'Success'
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');

		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');

		return (-1);
	}
	_putchar('\n');

}
