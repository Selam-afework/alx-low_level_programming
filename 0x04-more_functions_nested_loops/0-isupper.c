#include "main.h"

/**
 * main - to determine uppercase character
 *
 * @c: character being evaluated
 *
 * Return: 1
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
