#include "lists.h"

/**
 * get_dnodeint_at_index - call point
 * @head: pointer to pointer to head of node
 * @index: index
 * Return: return success
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head != NULL)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}
