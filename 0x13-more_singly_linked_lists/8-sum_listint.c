#include "lists.h"
/**
 * sum_listint - return sum of all data of list
 * @head: head Node
 *
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr)
	{
		sum = sum  + ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}

