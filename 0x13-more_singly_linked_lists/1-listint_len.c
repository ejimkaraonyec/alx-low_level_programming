#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of a linked list
 *
 * Return: number of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t num_els = 0;

	while (h != NULL)
	{
		num_els++;
		h = h->next;
	}
	return (num_els);
}
