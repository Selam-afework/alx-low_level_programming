#include "main.h"

/**
 * _islower - a function that checks for a lower character
 *
 *@c: an alphabet being evaluated
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c  <= 122)

		return (1);

	else
		return (0);
}
