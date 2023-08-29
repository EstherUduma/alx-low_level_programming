#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list
*
* @h: pointer
*
* Return: node
*
* File_name: 0-print_listint.c
*
* Author: Esther Ann Uduma
*/

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}

	return (node);
}
