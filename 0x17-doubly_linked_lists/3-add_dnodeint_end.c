#include "lists.h"

/**
 * add_dnodeint_end - add a new node to the end of a linked list
 * @head: pointer to a pointer of a linked list
 * @n: value to set the new node to.
 *
 * Return: a pointer to the new node added.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *node;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	node = *head;
	while (node->next != NULL)
		node = node->next;
	node->next = new;
	new->prev = node;
	return (new);
}
