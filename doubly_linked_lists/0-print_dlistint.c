#include "lists.h"

/**
 * print_list - call point
 * @h: head of node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	while (h != NULL)
	{
		if (h->n == 0)
			printf("0\n");
		else
			printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}