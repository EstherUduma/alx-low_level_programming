#include "main.h"
#include <stdlib.h>

/**
* _strdup - this function returns a pointer to a new string which is a
* duplicate of the string
*
* @str: string
*
* Return: NULL, if str == NULL && p == NULL
*
* File_name: 1-strdup.c
*
* Author: Esther Ann Uduma
*/

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int j;

	char *p;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	p = (char *)malloc((i + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j <= i; j++)
		{
			p[j] = str[j];
		}
	}

	return (p);
}
