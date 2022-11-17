#include "lists.h"

/**
 * sum_listint - call point
 * @head: pointer to head of node
 * Return: return success
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
