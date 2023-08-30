#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n)
* @head: pointer
* Return: 0
*/

int sum_listint(listint_t *head)
{
	listint_t *p;
	unsigned int sum = 0;

	if (head == NULL)
		return (0);

	p = head;
	while (p)
	{
		sum = sum + p->n;
		p = p->next;
	}
	return (sum);
}
