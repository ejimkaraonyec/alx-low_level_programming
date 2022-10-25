#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of linked list
 * @index: index of the node
 * Return: node of linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (n = 0; (n < index) && (head->next); n++)
		head = head->next;
	if (n < index)
		return (NULL);

	return (head);
}
