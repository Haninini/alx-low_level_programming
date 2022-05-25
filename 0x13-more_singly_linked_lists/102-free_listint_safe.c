#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *tor, *ha;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tor = head->next;
	ha = (head->next)->next;

	while (ha)
	{
		if (tor == ha)
		{
			tor = head;
			while (tor != ha)
			{
				nodes++;
				tor = tor->next;
				ha = ha->next;
			}

			tor = tor->next;
			while (tor != ha)
			{
				nodes++;
				tor = tor->next;
			}

			return (nodes);
		}

		tor = tor->next;
		ha = (ha->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tm;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tm = (*h)->next;
			free(*h);
			*h = tm;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tm = (*h)->next;
			free(*h);
			*h = tm;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}


