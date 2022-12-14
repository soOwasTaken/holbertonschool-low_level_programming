#include "lists.h"

/**
 * insert_nodeint_at_index - call point
 * @head: pointer to pointer to head of node
 * @idx: index
 * @n: data to add to the node
 * Return: return success
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(*new_node));
	listint_t *temp = *head;
	unsigned int i;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
