#include <stdio.h>

/**
* main - Prints alphabets in lowercase except q and e, followed by a new line
*
* Return: Always 0 if successful
*
* c1: alphabet a - d
*
* c2: alphabet f - p
*
* c3: alphabet r - z
*
* File_name: 4-print_alphabt.c
*
* Author: Esther Ann Uduma
*/

int main(void)
{
	char c1;
	char c2;
	char c3;

	for (c1 = 'a'; c1 <= 'd'; c1++)
		putchar(c1);
	for (c2 = 'f'; c2 <= 'p'; c2++)
		putchar(c2);
	for (c3 = 'r'; c3 <= 'z'; c3++)
		putchar(c3);
	putchar('\n');

	return (0);
}
