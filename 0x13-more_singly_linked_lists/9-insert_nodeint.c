#include "lists.h"

/**
* insert_nodeint_at_index - function that inserts a new node
* @head: pointer
* @idx: index
* @n: data
* Return: pointer
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *c;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	c = malloc(sizeof(listint_t));
	if (c == NULL)
		return (NULL);

	c->n = n;
	p = *head;

	if (idx == 0)
	{
		c->next = p;
		*head = c;
		return (c);
	}
	for  (i = 0; i < idx - 1; i++)
	{
		if (p == NULL)
			return (NULL);
		p = p->next;
	}

	c->next = p->next;
	p->next = c;

	return (c);
}
