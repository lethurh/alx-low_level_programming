#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: head lists
 * @index: index of the node
 * Return: nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int r;

	for (r = 0; r < index && head != NULL; r++)
	{
		head = head->next;
	}
	return (head);
}
