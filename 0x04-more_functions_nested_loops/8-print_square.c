#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0, j;

		do {
			j = 0;
			do {
				_putchar('#');
				j++;
			} while (j < size);
			_putchar('\n');
			i++;
		} while (i < size);
	}
}
