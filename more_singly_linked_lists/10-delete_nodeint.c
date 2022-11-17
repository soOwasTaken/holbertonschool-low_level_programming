#include "lists.h"

/**
 * delete_nodeint_at_index - call point
 * @head: pointer to pointer to head of node
 * @index: index
 * Return: return success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *del= temp->next;/* del pointer points to the node */
	unsigned int i;
	if (index == 0)
	{
		printf("\nElement deleted is : %d\n", temp->n);
		(*head) = (*head)->next; /* Advancing the head pointer */
		temp->next = NULL;
		free(temp); /* Node is deleted */
		return(1);
	}
	else 
	{
		for (i = 0; i < index - 1; i++) 
			temp = temp->next;
		temp->next = temp->next->next;
		del->next = NULL;
		free(del); /* Node is deleted */
		return(1);
	}
	return(-1);
}