#include "main.h"

/**
 * print_last_digit - printing the last digit of a number
 *
 * @n: the number being evaluated
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)

{
	int p = (n % 10);

	if (p < 0)
	{
		p = (-1 * p);
	}

	_putchar(p + '0');
	return (p);
}
