#include "main.h"
#include <stdlib.h>

/**
* str_concat - this function concatenates two strings
*
* @s1: first string
*
* @s2: second string
*
* Return: NULL on failure
*
* File_name: 2-str_concat.c
*
* Author: Esther Ann Uduma
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *p;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = " ";
		s2 = " ";
	}

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	p = (char *)malloc((i + j + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (k = 0; k < i; k++)
		{
			p[k] = s1[k];
		}
		for (l = 0; l < j; l++)
		{
			p[k + l] = s2[l];
		p[k + l] = '\0';
		}
	}
		return (p);
}
