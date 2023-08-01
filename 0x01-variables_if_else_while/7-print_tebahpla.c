#include <stdio.h>

/**
* main - This function prints the lowercase alphabet in reverse
*
* Return: Always 0 if successful
*
* File_name: 7-print_tebahpla.c
*
* Author: Esther Ann Uduma
*/

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
