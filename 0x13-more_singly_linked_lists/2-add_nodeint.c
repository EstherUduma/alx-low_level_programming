#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning of a listint_t list.
*
* @head: head pointer
*
* @n: node data
*
* Return: new head pointer
*
* File_name: 2-add_nodeint.c
*
* Author: Esther Ann Uduma
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
