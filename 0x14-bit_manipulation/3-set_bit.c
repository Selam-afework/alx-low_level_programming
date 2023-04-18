#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: pointer
 * @index: the index
 *
 * Return: 1 or -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1 << index;

	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}
	else
	{
		*n = (*n | mask);
		return (1);
	}
}
