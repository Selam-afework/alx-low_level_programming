#include "main.h"

/**
 * _isalpha - a function to check for alphabetic character
 *
 * @c: a character being evaluated
 *
 * Return: Always 0 (Success)
 *
 */

int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		return (1);
	else
		return (0);

}
