#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: pointer for a string
 *
 * Return: 1
 */

int is_palindrome(char *s)
{
	int l, r;

	if (s == 0, l < 0, r < 0)
	{
		return (0);
	}
	if (l >= r)
	{
		return (1);
	}
	if (s[l] == s[r])
	{
		return (1);
	}
	return (0);
}
