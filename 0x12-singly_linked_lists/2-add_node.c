#include "lists.h"
#include <string.h>

/**
 * add_node - add a node at the head of a list.
 * @head : pointer of a pointer to a list.
 * @str : the string to be added to the new list .
 *
 * Return: if the function fails NULL.
 * otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
