#include "lists.h"

/**
 * pop_listint - call point
 * @head: pointer to pointer to head of node
 * Return: return success
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
