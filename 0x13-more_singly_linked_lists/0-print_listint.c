#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the element
 *
 * @h: pointer to the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t d;

	d = 0;
	if (h)
	{
		if (h != NULL)
		{
			printf("%d\n", h->n);
		}

		h = h->next;

		d++;
	}

	return (d);
}
