#include "lists.h"

/**
 * find_listint_loop -  finds the loop in a linked list.
 * @head: head of a list
 * Return: the address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *q2;
	listint_t *pr;

	q2 = head;
	pr = head;
	while (head && q2 && q2->next)
	{
		head = head->next;
		q2 = q2->next->next;

		if (head == q2)
		{
			head = pr;
			pr = q2;
			while (1)
			{
				q2 = pr;
				while (q2->next != head && q2->next != pr)
				{
					q2 = q2->next;
				}
				if (q2->next == head)
					break;

				head = head->next;
			}
			return (q2->next);
		}
	}
	return (NULL);
}
