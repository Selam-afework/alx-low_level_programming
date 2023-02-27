#include "main.h"

/**
 * swap_int - swapping the values of two integers
 *
 * @a: integer 1 to be swapped
 * @b: integer 2 to be swapped
 *
 * return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;

	*b = temp;
}
