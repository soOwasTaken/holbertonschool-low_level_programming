#include "lists.h"

/**
 * free_dlistint - call point
 * @head: head of node
 * Return: return success
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while(head)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
