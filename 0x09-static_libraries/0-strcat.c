#include "main.h"

/**
*  _strcat - this function concatenates string
*
* @dest: this is the destination string
*
* @src: this is the source string
*
* cat: the pointer to the beginning of the destination string
*
* Return: Always result if successful
*
* File_name: _putchar.c
*
* Author: Esther Ann Uduma
*/

char *_strcat(char *dest, char *src)
{
	char *cat = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (result);
}
