#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head of linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num_els = 0;

	while (h != NULL)
	{
		num_els++;
		h = h->next;
	}
	return (num_els);
}
