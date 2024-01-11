#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a choosen postion
 * @h: pointer of a pointer to linked list.
 * @idx: position to add the new node at.
 * @n: value to set the new node to.
 *
 * Return: a pointer to the add node else NULL if fail.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *t = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		t = t->next;
		if (t == NULL)
			return (NULL);
	}
	if (t->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = t;
	new->next = t->next;
	t->next->prev = new;
	t->next = new;
	return (new);
}
