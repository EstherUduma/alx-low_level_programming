#include "main.h"
#include <stdlib.h>

/**
* _calloc - this function that allocates memory for an array, using malloc
*
* @nmemb: number of elements in an array
*
* @size: size of each element in the array
*
* Return: pointer to the allocated memory, or NULL if fail
*
* File_name: 2-calloc.c
*
* Author: Esther Ann Uduma
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb != 0 && size != 0)
	{
		p = malloc(nmemb * size);
		if (p != NULL)
		{
			for (i = 0; i < nmemb * size; i++)
				p[i] = 0;
		}
	}

	return (p);
}
