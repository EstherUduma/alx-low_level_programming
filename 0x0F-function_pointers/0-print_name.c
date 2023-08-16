#include "function_pointers.h"

/**
* print_name - function that prints a name
*
* @name: the name to be printed
*
* @f: function pointer
*
* Return: Nothing
*
* File_name: 0-print_name.c
*
* Author: Esther Ann Uduma
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
	if (name == NULL || f == NULL)
		return;
}
