#include "main.h"

/**
* _strncpy - this function copies n bytes of a string
*
* @dest: first string
*
* @src: second string
*
* @n: number of bytes to copy
*
* Return: dest
*
* File_name: 2-strncpy.c
*
* Author: Esther Ann Uduma
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	for (i = 0; i < n; i++)
	{
		if (*src != '\0')
		{
			*p = *src;
			src++;
			p++;
		}
		else
		{
			*p = '\0';
			p++;
		}
	}

	return (dest);
}
