#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the no of elements in a linked listint_t
 *
 * @h: pointer to the list
 * Return: no of elements in the link
 */

size_t listint_len(const listint_t *h)
{
	size_t d;

	d = 0;

	while (h)
	{
		if (h != NULL)
		{
			h = h->next;
		}
		d++;

	}
	return (d);
}
