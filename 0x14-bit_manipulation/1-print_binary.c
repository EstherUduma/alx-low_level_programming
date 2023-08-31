#include "main.h"

/**
* print_binary - function that prints the binary representation of a number
*
* @n: decimal number
*
* Return: void
*
* File_name: 1-print_binary.c
*
* Author: Esther Ann Uduma
*/

void print_binary(unsigned long int n)
{
	unsigned long int binary = 1;
	unsigned long int a = n;
	unsigned long int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (a > 0)
	{
		i++;
		a = a >> 1;
	}

	binary = binary << (i - 1);

	for (; i > 0; i--)
	{
		if (n & binary)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		binary = binary >> 1;
	}
}
