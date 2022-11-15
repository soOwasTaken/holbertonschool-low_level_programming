#include "lists.h"

/**
 * free_listint2 - call point
 * @head: pointer to head of node
 * Return: return success
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*(head))->next;
		free(temp);
	}
	*head = NULL;
}
