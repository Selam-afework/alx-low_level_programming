#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of list_t
 *
 * @h: pointer to the list_t
 *
 * Return: the no of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;

		n++;
	}
	return (n);
}
