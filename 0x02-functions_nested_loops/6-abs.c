#include "main.h"

/**
 * _abs - to compute the absolute value of an integer
 *
 * @n: the number being evaluated
 *
 * Return: Always 0 'Success'
 */

int _abs(int n)
{
	int a = 1 * n;
	int b = -1 * n;

	if (n > 0)
	{
		_putchar('0' + a);
	}
	else 
	{
		_putchar('0' + b);
	}
	_putchar('\n');
	return (0);

}

