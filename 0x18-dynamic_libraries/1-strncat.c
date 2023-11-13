#include "main.h"

/**
* _strncat - this function concatinates string
*
* @dest: first string
*
* @src: second string
*
* @n: no. of bytes to concatenate
*
* Return: dest
*
* File_name: 1-strncat.c
*
* Author: Esther Ann Uduma
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *p = dest;

	while (*p != '\0')
		p++;
	for (i = 0; i < n && *src != '\0'; i++)
	{
		*p = *src;
		src++;
		p++;
	}
	*p = '\0';

	return (dest);
}
