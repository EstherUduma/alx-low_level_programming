#include "main.h"

/**
* _isalpha - this function checks alphabetic character
*
* @c: character
*
* Return: Always 1 if a character
*
* File_name: 4-isalpha.c
*
* Author: Esther Ann Uduma
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

	return (c);
}
