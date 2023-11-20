#include "lists.h"
#include <stdio.h>

/**
 * print_listint -function that prints all the elements of a listint_t list.
 * @h: element of listint_t
 * Return: the number of nodes of the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t r;

	for (r = 0; h != NULL; ++r)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (r);
}
