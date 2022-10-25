#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: head of the listint_t list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes_n = 0;

	while (head && head > head->next)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		nodes_n++;
		head = head->next;
	}
	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
		nodes_n++;
	}

	return (nodes_n);
}
