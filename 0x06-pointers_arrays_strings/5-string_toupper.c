#include "main.h"

/**
 * string_toupper - to change lowercase strings to uppercase strings
 *
 * @n: string to be converted
 *
 * Return: n
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
