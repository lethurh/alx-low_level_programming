#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int r;
	listint_t *str;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (r = 0; r < idx - 1 && h != NULL; r++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	str = malloc(sizeof(listint_t));
	if (str == NULL)
		return (NULL);

	str->n = n;

	if (idx == 0)
	{
		str->next = *head;
		*head = str;
	}
	else
	{
		str->next = h->next;
		h->next = str;
	}

	return (str);
}
