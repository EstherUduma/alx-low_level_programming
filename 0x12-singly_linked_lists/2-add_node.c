#include "lists.h"

/**
* add_node - a function that adds a new node at the beginning of a list
*
* @head: pointer to a pointer to the head node
*
* @str: pointer to the string
*
* Return: new node
*
* File_name: 2-add_node.c
*
* Author: Esther Ann Uduma
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

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
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
