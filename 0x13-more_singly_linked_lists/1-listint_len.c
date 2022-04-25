#include "lists.h"
/**
 * listint_len - return number of elements
 * @h: head pointer
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	listint_t *p;
	size_t count = 0;

	if (!h)
		return (0);
	count++;
	p = h->next;
	while (p)
	{
		count++;
		p = p->next;
	}

	return (count);
}
