#include "lists.h"

/**
 * delete_dnodeint_at_index - call point
 * @head: pointer to pointer to head of node
 * @index: index
 * Return: return success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (!head)
		return (-1);
	if (head)
	{
		while (index && temp)
		{
			temp = temp->next;
			index--;
		}
		if (index)
			return (-1);
		if (!index && temp)
		{
			if (temp->next)
				temp->next->prev = temp->prev;
			if (temp->prev)
				temp->prev->next = temp->next;
			else
				*head = temp->next;
			free(temp);
			return (1);
		}
	}
	return (-1);
}
