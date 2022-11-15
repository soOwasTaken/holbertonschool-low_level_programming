#include "lists.h"

/**
 * list_len - call point
 * @h: head of node
 * Return: elements of node
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
