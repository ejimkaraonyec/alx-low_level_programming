#include "lists.h"

/**
 * add_node - adds a new node at the beginning of  list_t list
 * @head: head of linked list
 * @str: string to be added to list
 *
 * Return: number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t lenght;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (lenght = 0; *str != '\0'; str++)
		lenght;

	new->len = lenght;
	new->next = *head;
	*head = new;

	return (*head);
}
