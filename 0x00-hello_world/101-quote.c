#include <stdio.h>

/**
* main - This function prints a line of text to the console
*
* Return: Always 0 if successful
*
* File_name: 101-quote.c
*
* Author: Esther Ann Uduma
*/

int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015\-10\-19";

	write(2, text, 59);

	return (1);
}
