#include "main.h"

/**
* flip_bits - function that returns the number of bits you would need to flip
*
* @n: first number
*
* @m: number achieved
*
* Return: number of bits flipped
*
* File_name: 5-flip_bits.c
*
* Author: Esther Ann Uduma
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m, p = n | m;
	unsigned long int bit = 1, no = 0;

	while (p)
	{
		if (diff & bit)
		{
			no++;
		}
		bit = bit << 1;
		p = p >> 1;
	}

	return (no);
}
