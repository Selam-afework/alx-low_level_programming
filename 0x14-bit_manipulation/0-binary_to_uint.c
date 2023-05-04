#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number of 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (; b[i] == '0' || b[i] == '1'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		n <<= 1;
		n += b[i] - '0';
	}
	return (n);
}
