#include "lists.h"
/**
 * pop_listint - delete head of list
 * @head: pointer to head of node list
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *ptr;

	if ((*head) == NULL)
	{
		return (0);
	}
	ptr = (*head)->next;
	n = (*head)->n;
	free(*head);
	(*head) = ptr;
	return (n);
}

