#include "main.h"

/**
 * flip_bits - prints the no of bits needed to flip from one no to another
 *
 * @n: no to be flipped
 * @m: no to be flipped
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nflips;

	unsigned long int num = n ^ m;

	for (nflips = 0; num > 0;)
	{
		if ((num & 1) == 1)
		{
			nflips++;
		}
		num = num >> 1;
	}
	return (nflips);
}
