#include "lists.h"
/**
 * free_listint - free memory allocated for list
 * @head: list head
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
