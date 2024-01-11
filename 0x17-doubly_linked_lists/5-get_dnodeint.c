#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at an index.
 * @head: pointer to a pointer of a linked list.
 * @index: position at which to get a node form in a list.
 *
 * Return: pointer of the found node or else NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
