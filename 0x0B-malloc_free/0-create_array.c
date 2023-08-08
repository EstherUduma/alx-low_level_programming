#include "main.h"
#include <stdlib.h>

/**
* create_array - function that creates an array of chars and initializes it
* with a specific char.
*
* @size: size of array
*
* @c: character
*
* Return: char *
*
* File_name: 0-create_array.c
*
* Author: Esther Ann Uduma
*/

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = (char *)malloc(size * sizeof(char));

	if (size == 0 || p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
