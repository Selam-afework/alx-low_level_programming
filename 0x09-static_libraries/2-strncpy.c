#include "main.h"

/**
 * _strncpy - to copy a string
 *
 * @dest: string no one
 *
 * @src: string no two
 *
 * @n: an integer
 *
 * Return: dest.
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
