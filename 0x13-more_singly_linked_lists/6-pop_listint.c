#include "lists.h"

/**
* pop_listint - function that deletes the head node of the linked list.
*
* @head: head pointer
*
* Return: head node data
*
* File_name: 6-pop_listint.c
*
* Author: Esther Ann Uduma
*/

int pop_listint(listint_t **head)
{
	listint_t *p = *head;
	listint_t *c;
	int n;

	if (*head == NUL)
		return (0);

	n = p->n;
	c = p->next;
	*head = c;
	free(p);

	return (n);
}
