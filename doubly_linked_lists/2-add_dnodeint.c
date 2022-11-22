#include "lists.h"

/**
 * add_node - call point
 * @h: head of node
 * @str: str added node
 * Return: adress of node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* 1. allocate node */
	dlistint_t *new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
	{
		return (NULL);
	}
	/* 2. put in the data  */
	new_node->n  = n;
	/* 3. Make next of new node as head */
	new_node->next = (*head);
	new_node->prev = NULL;
	/* 4. move the head to point to the new node */
	(*head) = new_node;
	return (*head);
}
