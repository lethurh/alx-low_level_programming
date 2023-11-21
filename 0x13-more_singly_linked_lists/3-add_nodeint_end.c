#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a new node at the end.
 * @head: head of the listint_t list.
 * @n: new element in the listint_t list.
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *str, *add = *head;
	/*using malloc*/

	str = malloc(sizeof(listint_t));
	if (str == NULL)
		return (NULL);
	str->n = n;
	str->next = NULL;
	if (add == NULL)
	{
		*head = str;
		return (str);
	}
	while (add->next)
		add = add->next;
	add->next = str;
	return (str);
}
