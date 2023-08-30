#include "lists.h"

/**
* free_listint2 - function that frees a listint_t list.
*
* @head: head pointer
*
* File_name: 5-free_listint2.c
*
* Author: Esther Ann Uduma
*/

void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *n_node;

	if (head == NULL)
	{
		return;
	}

	node = *head;

	while (node != NULL)
	{
		n_node = node->next;
		free(node);
		node = n_node;
	}

	*head = NULL;
}
