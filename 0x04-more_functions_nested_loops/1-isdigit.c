#include "main.h"
#include <stdio.h>

/**
 * _isdigit - to determine a digit
 *
 * @c: a character being evaluated
 *
 * Return: 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
