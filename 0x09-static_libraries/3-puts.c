#include "main.h"

/**
* _puts - this function prints a string followed by a new line
*
* @s: this is the pointer to the string
*
* File_name: 3-puts.c
*
* Author: Esther Ann Uduma
*/

void _puts(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		_putchar(s[a]);
		a++;
	}
	_putchar('\n');
}
