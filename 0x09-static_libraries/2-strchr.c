#include "main.h"

/**
* _strchr - this function locates a character in a string
*
* @s: the string
*
* @c: character to be located
*
* Return: string after character
*
* File_name: 2-strchr.c
*
* Author: Esther Ann Uduma
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == '\0' && *s == c)
		return (s);

	return (s + 1);
}
