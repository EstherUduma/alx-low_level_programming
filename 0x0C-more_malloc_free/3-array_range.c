#include "main.h"
#include <stdlib.h>

/**
* array_range - this function creates an array of integers
*
* @min: minimum value
*
* @max: maximum value
*
* Return: Pointer to the new array, or NULL if fail
*
* File_name: 3-array_range.c
*
* Author: Esther Ann Uduma
*/

int *array_range(int min, int max)
{
	int *p = NULL;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	p = malloc(size * sizeof(int));

	if (p != NULL)
	{
		for (i = 0; i < size; i++)
		{
			p[i] = min + 1;
		}
	}

	return (p);
}
