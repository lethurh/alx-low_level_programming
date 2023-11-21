#include "lists.h"

/**
 * listint_len - function that returns the number of elements.
 * @h: link to print
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t r = 0; /*count*/

	while (h)
	{
		h = h->next;
		r++;
	}
	return (r);
}
