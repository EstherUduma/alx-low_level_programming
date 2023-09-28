#include "main.h"

/**
* print_binary - function that prints the binary representation of a number
* @n: decimal number
* Return: void
*/

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 0; (n >> i) > 0; i++)
	{
	}

	mask = mask << (i - 1);

	for (; i > 0; i--)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask = mask >> 1;
	}
}
