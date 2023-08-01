#include <stdio.h>

/**
* main - This function prints all the numbers of base 16 in lowercase
*
* Return: Always 0 if successful
*
* File_name: 8-print_base16.c
*
* Author: Esther Ann Uduma
*/

int main(void)
{
	char n;
	char c;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
