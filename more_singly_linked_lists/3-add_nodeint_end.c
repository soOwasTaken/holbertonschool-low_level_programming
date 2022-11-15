#include "lists.h"

/**
 * add_nodeint_end - call point
 * @head: head of node
 * @n: int added node at the end
 * Return: adress of last node or NULL if it fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* 1. allocate node */
	listint_t *new_node = malloc(sizeof(*new_node));
	listint_t *last = *head;
	int x = n;

	if (new_node == NULL)
	{
		return (NULL);
	}
	/* 2. put in the data  */
	new_node->n = x;
	/* 3. This new node is going to be the last node, so make next */
	/* of it as NULL*/
	new_node->next = NULL;
	/* 4. If the Linked List is empty, then make the new node as head */
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	/* 5. Else traverse till the last node */
	while (last->next != NULL)
		last = last->next;
	/* 6. Change the next of last node */
	last->next = new_node;
	return (last);
}
