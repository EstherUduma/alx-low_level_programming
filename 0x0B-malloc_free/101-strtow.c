#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_grid1 - frees a 2D array
*
* @grid: multidimensional array
*
* @height: height
*
* Return: none
*
* File_name: 101-strtow.c
*
* Author: Esther Ann Uduma
*/

void free_grid1(char **grid, unsigned int height)
{
	if (height != 0 && grid != NULL)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
* strtow - splits a string into words
*
* @str: string
*
* Return: pointer of an array
*
* File_name: 101-strtow.c
*
* Author: Esther Ann Uduma
*/

char **strtow(char *str)
{
	char **p;
	unsigned int i, j, a, c, height;

	if (*str == '\0' || str == NULL)
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	p = malloc((height + 1) * sizeof(char *));
	if (height == 0 || p == NULL)
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
					free_grid1(p, i);
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
