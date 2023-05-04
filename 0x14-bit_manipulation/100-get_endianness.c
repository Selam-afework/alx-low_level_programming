#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 or 0
 */

int get_endianness(void)
{
	int n;

	int z;

	n = 1;

	z = (int)(((char *) &n)[0]);

	return (z);
}
