#include "lists.h"

/**
 * add_node_end - call point
 * @head: head of node
 * @str: str added node
 * Return: adress of last node or NULL if it fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(*new_node));
	dlistint_t *last = *head; /* used in step 5*/

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	new_node->prev = last;
	return (last);
}
