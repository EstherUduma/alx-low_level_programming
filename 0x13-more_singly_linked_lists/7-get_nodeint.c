#include "lists.h"

/**
* get_nodeint_at_index - function that gets the nth node.
*
* @head: head pointer
*
* @index: nth node
*
* Return: nth node
*
* File_name: 5-free_listint2.c
*
* Author: Esther Ann Uduma
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head, *c;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (p->next == NULL)
			return (NULL);
		c = p->next;
		p = c;
	}
	return (p);
}
