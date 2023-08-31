#include "main.h"

/**
* set_bit - function that sets the value of a bit to 1 at a given index
*
* @n: pointer
*
* @index: index
*
* Return: 1 if it worked, or -1 if an error occurred
*
* File_name: 3-set_bit.c
*
* Author: Esther Ann Uduma
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index > 64)
		return (-1);

	bit = bit << index;
	*n = *n | bit;

	return (1);
}
