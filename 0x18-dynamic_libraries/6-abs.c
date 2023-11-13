#include "main.h"

/**
* _abs - this function prints absolute value of an integer
*
* @n: the integer to be printed
*
* Return: absolute value of an integer
*
* File_name: 6-abs.c
*
* Author: Esther Ann Uduma
*/

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else if (n < 0)
	{
		n = n * (-1);
		return (n);
	}

	return (n);
}
