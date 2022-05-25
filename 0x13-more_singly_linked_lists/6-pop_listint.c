#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer to the head of the list
 * Return: 0 - if the list is empty, otherwise the node
 */
int pop_listint(listint_t **head)
{
	listint_t *r;
	int t;

	if (*head == NULL)
		return (0);

	r = *head;
	t = (*head)->n;
	*head = (*head)->next;

	free(r);

	return (t);
}
