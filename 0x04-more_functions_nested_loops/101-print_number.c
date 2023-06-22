#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer that is to be printed
 */
void print_number(int n)
{
	unsigned int intNumber;

	if (n < 0)
	{
		intNumber = -n;
		_putchar('-');
	} else
	{
		intNumber = n;
	}

	if (intNumber / 10)
	{
		print_number(intNumber / 10);
	}

	_putchar((intNumber % 10) + '0');
}
