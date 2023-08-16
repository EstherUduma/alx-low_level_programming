#include "function_pointers.h"

/**
* array_iterator - function that executes a function given as a parameter
*
* @array: array
*
* @size: the size of array
*
* @action: function pointer
*
* Return: Nothing
*
* File_name: 1-array_iterator.c
*
* Author: Esther Ann Uduma
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
