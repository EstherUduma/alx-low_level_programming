#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	for (int i = length - 1; i >= 0; i--)
		putchar(s[i]);
	putchar('\n');
}
