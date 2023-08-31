#include "main.h"

/**
* get_bit - function that returns the value of a bit at a given index
*
* @n: decimal digit
*
* @index: index
*
* Return: the value of the bit at index index or -1 if an error occured
*
* File_name: 2-get_bit.c
*
* Author: Esther Ann Uduma
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit = 1;
	unsigned long int val;

	if (n == 0)
		return (0);

	if (index > 64)
		return (-1);

	bit = bit << index;

	if (n & bit)
		val = 1;
	else
		val = 0;

	return (val);
}
