#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_els = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_els++;
		h = h->next;
	}
	return (num_els);
}
