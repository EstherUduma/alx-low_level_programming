#include "main.h"

/**
 * print_numbers - print 0-9
 * @a: stores the numbers or characters
 * Return: void
 */

void print_numbers(void)
{
	char a;

	do {
		for (a = '0'; a <= '9'; a++)
		{
			_putchar (a);
		}
	} while (0);
	_putchar ('\n');
}
