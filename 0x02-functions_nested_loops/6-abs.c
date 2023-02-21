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
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
