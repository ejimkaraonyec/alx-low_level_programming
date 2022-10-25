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
	long int diff;

	if (head->next == NULL)
		exit(98);
	while (head)
	{
		diff = head - head->next;
		nodes_n++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (nodes_n);
}
