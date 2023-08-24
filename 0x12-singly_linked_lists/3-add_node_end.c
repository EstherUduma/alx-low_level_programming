#include "lists.h"

/**
* add_node_end - a function that adds a new node at the end of a list
*
* @head: pointer to a pointer to the head node
*
* @str: pointer to the string
*
* Return: address of the newNode
*
* File_name: 3-add_node_end.c
*
* Author: Esther Ann Uduma
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *current;

	if (str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
	}
	return (newNode);
}
