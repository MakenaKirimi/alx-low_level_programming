#include "lists.h"
/**
 * add_nodeint - add new node at begining
 * @head: head pointer
 * @n: default num
 *
 * Return: address of new node list head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t  *NewNode;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (*head);
	NewNode->n = n;
	NewNode->next = NULL;
	if (*head == NULL)
	{
		*head = NewNode;
		return (*head);
	}
	NewNode->next = *head;
	*head = NewNode;



	return (*head);
}
