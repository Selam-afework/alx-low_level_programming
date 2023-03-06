#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @n: bytes
 * @src: first memory area
 * @dest: second memory area
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
