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
	dlistint_t *new_node, *temp;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));


	temp = *h;

	while (idx > 1 && temp && temp->next)
	{
		temp = temp->next;
		idx--;
	}

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	if (idx > 1 || temp == NULL)
		return (NULL);

	new_node->n = n;

	if (temp->next != NULL)
		temp->next->prev = new_node;
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
