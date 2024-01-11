#include "lists.h"

/**
 * add_dnodeint - add a new at the start of a linklist
 * @head: pointer to a pointer of a linked list
 * @n: value to set the node to.
 *
 * Return: a pointer to the new node created.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = *head;
	if (*head != NULL)
		(*head)->prev = ptr;
	*head = ptr;
	return (ptr);
}
