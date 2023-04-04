#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 *
 * @head: double pointer
 * @n: integer to be added
 *
 * Return: the address of the new element or NULL if faile
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (! new_node)
	{
		return (NULL);
	}

	new_node->n = n;

	new_node->next = *head;

	*head = new_node;

	return (*head);
}
