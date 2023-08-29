#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list.
*
* @head: head pointer
*
* @n: node data
*
* Return: new head pointer
*
* File_name: 3-add_nodeint_end.c
*
* Author: Esther Ann Uduma
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *lastnode = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (0);
	}

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	while (lastnode->next != NULL)
	{
		lastnode = lastnode->next;
	}
	lastnode->next = node;

	return (*head);
}
