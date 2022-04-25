#include "lists.h"
/**
 * add_nodeint_end - add node at end of list
 * @head: head pointer
 * @n: default number
 *
 * Return: new list head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewNode, *ptr;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (*head);
	NewNode->n = n;
	NewNode->next = NULL;
	if (*head == NULL)
	{
		*head = NewNode;
	}
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = NewNode;
	}

	return (*head);
}
