#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * print_listint_safe - counts the number of unique nodes
 * @head: a pointer to the head of the list to check
 * Return: if the list is not looped - 0, otherwise the number
 *         of unique nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tort, *h;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tort = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (tort == h)
		{
			tort = head;
			while (tort != h)
			{
				nodes++;
				tort = tort->next;
				h = h->next;
			}
			tort = tort->next;
			while (tort != h)
			{
				nodes++;
				tort = tort->next;
			}
			return (nodes);
		}
		tort = tort->next;
		h = (h->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a listint_t safely
 * @head: a pointer to the head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, indx = 0;

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
		for (indx = 0; indx < nodes; indx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
