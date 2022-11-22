#include "lists.h"

/**
 * free_list - call point
 * @head: head of node
 * Return: return success
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		temp->prev = NULL;
		free(head->n);
		free(head);
		head = temp;
	}
}
