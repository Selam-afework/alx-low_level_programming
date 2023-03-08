#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: input number
 *
 * Return: recursion result
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - square root function
 * @n: input number
 * @i: integer
 * Return: sqrt
 */

int _sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	else if ((i * i) > n)
	{
		return (-1);
	}
	else if ((i * i) == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
