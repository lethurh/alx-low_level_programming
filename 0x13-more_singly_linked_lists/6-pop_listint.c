#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of lists
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int p;
	listint_t *arr;
	listint_t *t;

	if (*head == NULL)
		return (0);
	t = *head;
	p = t->n;
	arr = t->next;
	free(t);
	*head = arr;
	return (p);
}
