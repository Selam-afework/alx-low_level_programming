#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 *
 * @n: integer
 * @index: a given index
 *
 * Return: value of the bit or -1 for error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit = 0;

	if (index > 32)
	{
		return (-1);
	}
	while (bit < index)
	{
		n = n >> 1;
		bit++;
	}
	return (n & 1);
}
