#include "lists.h"

size_t looped_listint_len(const listint_t *head);

/**
 * looped_listint_len - counts the number of unique nodes
 * in a looped listint_t linked list
 * @head: head of the listint_t list
 *
 * Return: number of unique nodes in the list or 0
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t nodes_n = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	slow = head->next;
	fast = (head->next)->next;
	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			for (; slow != fast; nodes_n)
			{
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			for (; slow != fast; nodes_n++)
				slow = slow->next;

			return (nodes_n);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints a linked list, safely
 * @head: head of the listint_t list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
