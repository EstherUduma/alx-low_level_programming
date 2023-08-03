#include "main.h"

/**
* _print_rev_recursion - this function prints a string in reverse
*
* @s: string to be printed
*
* Return: void
*
* File_name: 1-print_rev_recursion.c
*
* Author: Esther Ann Uduma
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
