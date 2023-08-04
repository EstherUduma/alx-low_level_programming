#include "main.h"

/**
* _isupper - this function checks if a character is uppercase
*
* @c: this is the character to check
*
* Return: Always 1 if successful, and 0 if not
*
* File_name: 0-isupper.c
*
* Author: Esther Ann Uduma
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
