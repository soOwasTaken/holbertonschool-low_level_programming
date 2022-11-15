#include "lists.h"

/**
 * add_node - call point
 * @h: head of node
 * @str: str added node
 * Return: adress of node
 */
list_t *add_node(list_t **head, const char *str)
{
    /* 1. allocate node */
    list_t *new_node = malloc(sizeof(*new_node));
	if(new_node == NULL)
	{
		return(NULL);
	}
    /* 2. put in the data  */
    new_node->str  = strdup(str);
	new_node->len = strlen(str);
    /* 3. Make next of new node as head */
    new_node->next = (*head);
    /* 4. move the head to point to the new node */
    (*head)= new_node;
	return(*head);
}
