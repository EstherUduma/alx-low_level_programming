#include "main.h"

/**
* _puts_recursion - prints a string followed by a newline
*
* @s: string to be printed
*
* Return: void
*
* File_name: 0-puts_recursion.c
*
* Author: Esther Ann Uduma
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
