#include "lists.h"

/**
 * sum_dlistint - return the sum of all the elements values.
 * @head: pointer to a linked list.
 *
 * Return: the Sum (int)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
