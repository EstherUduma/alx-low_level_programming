#include <stdio.h>

/**
* main - Prints alphabets in lowercase and uppercase followed by a new line.
*
* Return: Always 0 if successful
*
* lc: Lowercase
*
* uc: Uppercase
*
* File_name: 3-print_alphabets.c
*
* Author: Esther Ann Uduma
*/

int main(void)
{
	char lc;
	char uc;

	for (lc = 'a'; lc <= 'z'; lc++)
		putchar(lc);
	for (uc = 'A'; uc <= 'Z'; uc++)
		putchar(uc);
	putchar('\n');

	return (0);
}
