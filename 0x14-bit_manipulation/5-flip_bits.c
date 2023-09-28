#include "main.h"

/**
* flip_bits - function that returns the number of bits you would need to flip
* to get from one number to another
* @n: first number to be flipped
* @m: number to be achieved
* Return: number of bits flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int no = 0;

	while (diff)
	{
		no += diff & 1;
		diff >>= 1;
	}

	return (no);
}
