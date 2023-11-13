#include "main.h"

/**
* _strcpy - this function copies strings
*
* @dest: first pointer
*
* @src: second pointer
*
* Return: dest
*
* File_name: 9-strcpy.c
*
* Author: Esther Ann Uduma
*/

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j <= i)
	{
		j++;
		dest[j] = src[j];
	}

	return (dest);
}
