#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s:  a string being evaluated
 *
 * Return: Always 0 'Success'
 */

int _strlen(char *s)
{
	int i;

	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
