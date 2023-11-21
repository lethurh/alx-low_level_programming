#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n) of a listint_t.
 * @head: head of lists
 * Return: the sum of all data (n).
 */
int sum_listint(listint_t *head)
{
	int i;

	i = 0;
	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
