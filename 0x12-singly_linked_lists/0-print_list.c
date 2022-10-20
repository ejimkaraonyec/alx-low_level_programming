#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of linked list
 *
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t num_els = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		num_els++;
		h = h->next;
	}
	return (num_els);
}
