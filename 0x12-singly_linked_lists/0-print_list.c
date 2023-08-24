#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
*
* @h: pointer
*
* Return: number of nodes
*
* File_name: 0-print_list.c
*
* Author: Esther Ann Uduma
*/

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
