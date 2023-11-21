#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node at the beginning
 * @head: first node on list
 * @n: data to add
 * Return: address of new element of null if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *str; /*Using malloc*/

	str = malloc(sizeof(listint_t));

	if (!str || !head)
		return (NULL);
	str->n = n; /*Assing data*/
	str->next = *head;
	*head = str;
	return (*head);
}
