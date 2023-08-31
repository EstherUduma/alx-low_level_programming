#include "main.h"

/**
* binary_to_uint - function that converts a binary number to an unsigned int
*
* @b: pointer
*
* Return: the converted number
*
* File_name: 0-binary_to_uint.c
*
* Author: Esther Ann Uduma
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int digit = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		digit = digit * 2 + (b[i] - '0');
		i++;
	}

	return (digit);
}
