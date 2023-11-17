#include "lists.h"
#include <stdio.h>

/**
 * print_list - print the int value in each element of a list.
 * @h: pointer to the head of a list.
 *
 * Return: Number of elements in a list.
 */
size_t print_list(const list_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
