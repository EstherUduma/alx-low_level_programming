#include "main.h"

/**
* _strpbrk - this function searches a string for any set of bytes
*
* @s: the string
*
* @accept: bytes
*
* Return: string
*
* File_name: 4-strpbrk.c
*
* Author: Esther Ann Uduma
*/

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}

	return (0);
}
