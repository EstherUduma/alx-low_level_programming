#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string
*
* @s: pointer to the string whose length is to be determined
*
* Return: length of string
*
* File_name: 2-strlen_recursion.c
*
* Author: Esther Ann Uduma
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
