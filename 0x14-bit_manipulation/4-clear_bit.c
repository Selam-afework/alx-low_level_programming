#include <stddef.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: pointer
 * @index: the index
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1 << index;

	if (index > (sizeof(n) * 8) || n == NULL)
	{
		return (-1);
	}
	*n &= ~(mask);
	return (1);
}
