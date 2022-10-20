#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list_t list
 * @head: head of linked list
 * @str: string to be added to list
 *
 * Return: number of elements
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last, *new;
	size_t lenght;

	last = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (lenght = 0; *str != '\0'; str++)
		lenght++;

	new->len = lenght;
	new->next = NULL;

	if (last == NULL)
		*head = new;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
