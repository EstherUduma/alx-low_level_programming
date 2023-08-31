#include "main.h"

/**
* clear_bit - function that sets the value of a bit to 0 at a given index
*
* @n: pointer
*
* @index: index
*
* Return: 1 if it worked, or -1 if an error occurred
*
* File_name: 4-clear_bit.c
*
* Author: Esther Ann Uduma
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index > 64)
		return (-1);

	bit = ~(bit << index);
	*n = *n & bit;

	return (1);
}
