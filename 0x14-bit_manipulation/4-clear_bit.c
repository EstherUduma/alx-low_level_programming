#include "main.h"

/**
* clear_bit - function that sets the value of a bit to 0 at a given index
* @n: pointer to integer
* @index: index of bit
* Return: 1 if it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check = 1;

	if (index > 63)
		return (-1);

	check = ~(check << index);
	*n = *n & check;

	return (1);
}
