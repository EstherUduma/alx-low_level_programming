#include "main.h"
#include <stdlib.h>

/**
* strtow - function that splits a string into words
*
* @str: string
*
* Return: none
*
* File_name: 101-strtow.c
*
* Author: Esther Ann Uduma
*/

char **strtow(char *str)
{
	char *p;
	unsigned int i, a, j, c, height;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (c = height = 0; str[c] != '\0'; c++)
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	}

	p = malloc((height + 1) * sizeof(char *));
	if (p == NULL || height == 0)
	{
		free(p);
		return (NULL);
	}
	for (i = a = 0; i < height; i++)
	{
		for (c = a; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				p[i] = malloc((c - a + 2) * sizeof(char));
				if (p[i] == NULL)
				{
					ch_grid(p, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a <= c; a++, j++)
			p[i][j] = str[a];
		p[i][j] = '\0';
	}
	p[i] = NULL;
	return (p);
}

/**
* ch_grid - frees a 2d array
*
* @grid: multidimensional array
*
* @height: height of the array
*
* Return: none
*/

void ch_grid(cha **grid, unsigned int height)
{
	if (grif != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
