#include "lists.h"

/**
 * insert_dnodeint_at_index - call point
 * @h: pointer to pointer to head of node
 * @idx: index
 * @n: data to add to the node
 * Return: return success
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(*new_node));
	dlistint_t *temp = *h;
	unsigned int i;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			new_node->next->prev = new_node;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
