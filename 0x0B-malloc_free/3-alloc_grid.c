#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - function returns a pointer to a 2 dimensional array of
* integers
*
* @height: height of array
*
* @width: width of array
*
* Return: NULL if fail
*
* File_name: 3-alloc_grid.c
*
* Author: Esther Ann Uduma
*/

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}

	return (p);
}
