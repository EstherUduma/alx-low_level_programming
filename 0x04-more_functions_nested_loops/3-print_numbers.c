#include "main.h"

/**
 * print_numbers - print 0-9
 * @a: stores the numbers or characters
 * Return: void
 */

void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar (a);
	}
	_putchar ('\n');
}
