#include "lists.h"

/**
 * free_list - call point
 * @head: head of node
 * Return: return success
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
