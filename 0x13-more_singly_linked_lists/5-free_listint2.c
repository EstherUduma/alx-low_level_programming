#include "lists.h"

/**
* listint_t - function that frees a listint_t list.
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
	listint_t *next;

	if (head == NULL)
	{
		return;
	}
	if (*head == NULL)
	{
		return;
	}
	
	node = *head;

	while (node != NULL)
	{
		next = node->next;
		free(node);
		node = next;
	}

	*head = NULL;
}
