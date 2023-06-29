#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int k, m, l;

	k = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (k < size)
	{
		m = size - k < 10 ? size - k : 10;
		printf("%08x: ", k);
		for (l = 0; l < 10; l++)
		{
			if (l < m)
				printf("%02x", *(b + k + l));
			else
				printf("  ");
			if (l % 2)
			{
				printf(" ");
			}
		}
		for (l = 0; l < m; l++)
		{
			int c = *(b + k + l);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		k += 10;
	}
}
