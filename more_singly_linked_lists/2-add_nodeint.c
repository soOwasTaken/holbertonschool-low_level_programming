#include "lists.h"

/**
 * add_nodeint - call point
 * @head: head of node
 * @n: interger to add to h
 * Return: adress of node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* 1. allocate node */
	listint_t *new_node = malloc(sizeof(*new_node));
	int x = n;

	if (new_node == NULL)
	{
		return (NULL);
	}
	/* 2. put in the data  */
	new_node->n = x;
	/* 3. Make next of new node as head */
	new_node->next = (*head);
	/* 4. move the head to point to the new node */
	(*head) = new_node;
	return (*head);
}
