#include "lists.h"

/**
* list_len - this function returns the number of elements in a linked list
*
* @h: pointer
*
* Return: number of nodes
*
* File_name: 1-list_len.c
*
* Author: Esther Ann Uduma
*/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
