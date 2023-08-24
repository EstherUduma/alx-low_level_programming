#include "lists.h"

/**
* free_list - a function that frees a list_t list
*
* @head: pointer to a pointer to the head node
*
* Return: Nothing
*
* File_name: 4-free_list.c
*
* Author: Esther Ann Uduma
*/

void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new->str);
		free(new);
	}
}
