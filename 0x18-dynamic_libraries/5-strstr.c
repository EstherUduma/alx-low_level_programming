#include "main.h"

/**
* _strstr - this function locates a sub string
*
* @haystack: the string
*
* @needle: the substring
*
* Return: haystack
*
* File_name: 5-strstr.c
*
* Author: Esther Ann Uduma
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	return (0);
}
