#include "lists.h"

/**
 * dlistint_len - call point
 * @h: head of node
 * Return: elements of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
