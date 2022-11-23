#include "lists.h"

/**
 * sum_dlistint - call point
 * @head: pointer to head of node
 * Return: return success
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
