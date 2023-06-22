#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0, j;

		do {
			j = 0;
			do {
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
				j++;
			} while (j < n);
			_putchar('\n');
			i++;
		} while (i < n);
	}
}
