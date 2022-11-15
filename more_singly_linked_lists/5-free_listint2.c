#include "lists.h"

/**
 * free_listint2 - call point
 * @head: pointer to head of node
 * Return: return success
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
