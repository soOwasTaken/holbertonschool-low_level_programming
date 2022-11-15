#include "lists.h"

/**
 * list_len - call point
 * @h: head of node
 * Return: elements of node
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
