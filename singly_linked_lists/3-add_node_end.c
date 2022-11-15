#include "lists.h"

/**
 * add_node_end - call point
 * @head: head of node
 * @str: str added node
 * Return: adress of last node or NULL if it fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* 1. allocate node */
	list_t *new_node = malloc(sizeof(*new_node));
	list_t *last = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	/* 2. put in the data  */
	new_node->str  = strdup(str);
	new_node->len = strlen(str);
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
