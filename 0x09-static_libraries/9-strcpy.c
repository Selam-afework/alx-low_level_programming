#include "main.h"

/**
 * _strcpy - copies a string
 *
 * @src: points the string to be copied
 * @dest: pointer
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int n, p;

	for (p = 0; src[p] != '\0'; p++)
	{
	}
	for (n = 0; n <= p; n++)
	{
		dest[n] = src[n];
	}
	return (dest);
}
