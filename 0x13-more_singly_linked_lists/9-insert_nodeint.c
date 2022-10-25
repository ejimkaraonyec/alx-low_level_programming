#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of linked list
 * @idx: index to be inserted at (index starts at 0)
 * @n: integer data for the new node
 *
 * Return: address of new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *last, *new;
	unsigned int i = 0;

	last = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (i != idx - 1)
	{
		if (last == NULL || last->next == NULL)
			return (NULL);
		i++;
		last = last->next;
	}
	new->next = last->next;
	last->next = new;

	return (new);
}
