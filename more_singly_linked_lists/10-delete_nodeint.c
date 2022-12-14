#include "lists.h"

/**
 * delete_nodeint_at_index - call point
 * @head: pointer to pointer to head of node
 * @index: index
 * Return: return success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *del;/* del pointer points to the node */
	unsigned int i;

	if (!head || !*head)
		return (-1);
	del = *head;
	if (index == 0)
	{
		*head = (*head)->next; /* Advancing the head pointer */
		free(del); /* Node is deleted */
		return (1);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
		if (del->next == NULL)
			return (-1);
		del = del->next;
		}
	}
	temp = del->next;
	del->next = temp->next;
	free(temp); /* Node is deleted */
	return (1);
}
