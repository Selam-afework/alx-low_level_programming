#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 *
 * @head: double pointer
 * @n: new integer to add to the list
 *
 * Return: the address of the new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;

	new_node->next = *head;

	*head = new_node;

	return (*head);
}
