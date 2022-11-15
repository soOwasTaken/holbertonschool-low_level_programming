#include "lists.h"

/**
 * free_listint - call point
 * @head: head of node
 * Return: return success
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
