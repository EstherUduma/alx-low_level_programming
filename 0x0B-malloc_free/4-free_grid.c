#include "main.h"
#include <stdlib.h>

/**
* free_grid - function that frees a 2 dimensional grid
*
* @grid: double pointer
*
* @height: height of the grid
*
* Return: void
*
* File_name: 0-create_array.c
*
* Author: Esther Ann Uduma
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
