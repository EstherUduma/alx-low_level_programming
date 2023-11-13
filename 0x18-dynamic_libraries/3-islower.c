#include "main.h"

/**
* _islower - this function checks if a character is lowercase
*
* @c: character
*
* Return: Always 1 if successful, and 0 if not
*
* File_name: 3-islower.c
*
* Author: Esther Ann Uduma
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

	return (c);
}
