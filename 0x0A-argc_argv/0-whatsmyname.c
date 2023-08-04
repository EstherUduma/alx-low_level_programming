#include "main.h"

/**
* main - this function prints program name followed by new line
*
* @argc: the number of arguments
*
* @argv: the array of arguments
*
* Return: Always 0 if successful
*
* File_name: 0-whatsmyname.c
*
* Author: Esther Ann Uduma
*/

int main(int argc, char *argv[])
{
	(void)argc;
	_puts(argv[0]);
	_putchar('\n');

	return (0);
}
