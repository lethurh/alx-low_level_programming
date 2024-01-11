#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given postion
 * @head: pointer to a pointer of a linked list.
 * @index: position of the node to delete.
 *
 * Return: 1 on Sucess else -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (t == NULL)
			return (-1);
		t = t->next;
	}
	if (t == *head)
	{
		t->prev->next = t->next;
		if (t->next != NULL)
			t->next->prev = t->prev;
	}
	free(t);
	return (1);
}
