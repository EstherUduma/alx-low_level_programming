#include <stdio.h>

/**
* main - This function prints the alphabet in lowercase, followed by a new line
*
* Return: Always 0 if successful
*
* File_name: 2-print_alphabet.c
*
* Author: Esther Ann Uduma
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
