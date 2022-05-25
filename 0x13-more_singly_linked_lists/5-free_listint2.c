#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: the head of a list
 *
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *cu;

	if (head != NULL)
	{
		cu = *head;
		while ((tmp = cu) != NULL)
		{
			cu = cu->next;
			free(tmp);
		}
		*head = NULL;
	}
}
