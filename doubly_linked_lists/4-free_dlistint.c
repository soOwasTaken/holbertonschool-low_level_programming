#include "lists.h"

/**
 * free_dlistint - call point
 * @head: head of node
 * Return: return success
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (head == temp)
		head = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	free(temp);
}
