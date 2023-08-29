#include "lists.h"

/**
* free_listint - function that frees a listint_t list.
*
* @head: head pointer
*
* File_name: 4-free_listint.c
*
* Author: Esther Ann Uduma
*/

void free_listint(listint_t *head)
{
	listint_t *node = head;
	listint_t *next;

	while (node != NULL)
	{
		next = node->next;
		free(node);
		node = next;
	}
}
