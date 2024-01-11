#include "lists.h"

/**
 * free_dlistint - frees a linked list.
 * @head: pointer to a linked list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
