#include "function_pointers.h"

/**
* int_index - function that searches for an integer
*
* @array: array
*
* @size: the size of array
*
* @cmp: function pointer
*
* Return: Nothing
*
* File_name: 2-int_index.c
*
* Author: Esther Ann Uduma
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
