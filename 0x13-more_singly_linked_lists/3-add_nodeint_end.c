#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of linked list
 * @head: head of linked list
 * @n: integer
 *
 * Return: address of new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (new);
}
