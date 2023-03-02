#include "main.h"

/**
 * reverse_array - to reverese an array
 *
 * @a: array of integers
 *
 * @n: no of elements to reverse
 *
 * return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
