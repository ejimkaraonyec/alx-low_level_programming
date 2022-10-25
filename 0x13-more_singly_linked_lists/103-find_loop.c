#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of linked list
 *
 * Return: address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop, *addr;

	loop = addr = head;
	while (loop != NULL && addr != NULL)
	{
		addr = addr->next;
		loop = loop->next->next;
		if (loop == addr)
		{
			loop = head;
			while (addr != loop)
			{
				addr = addr->next;
				loop = loop->next;
			}
			return (addr);
		}
	}
	return (NULL);
}
