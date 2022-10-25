#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a linked list
 * @head: head of linked list
 * @index: index to delete
 *
 * Return: success 1, failure -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *curr = *head;
	unsigned int n;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	for (n = 0; n != index - 1; n++)
	{
		if (curr->next == NULL)
			return (-1);
		curr = curr->next;
	}

	tmp = curr->next;
	curr->next = tmp->next;
	free(tmp);

	return (1);
}
