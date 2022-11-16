#include "lists.h"

/**
 * free_listint2 - call point
 * @head: pointer to head of node
 * Return: return success
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	else
	{
		temp = (*(head));
		*head = temp->next;
		free(temp);
		temp = (*(head));
	}
	return(temp->n);
}
