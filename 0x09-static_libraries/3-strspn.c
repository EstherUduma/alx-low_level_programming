#include "main.h"

/**
* _strspn - this function gets the length of a prefix substring
*
* @s: characters
*
* @accept: character
*
* Return: the length of the prefix
*
* File_name: 3-strspn.c
*
* Author: Esther Ann Uduma
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	i = j = k = 0;

	if (*s == '\0' || *accept == '\0')
		return (k);
	while (s[j] != ',')
	{
		i = 0;

		while (accept[i] != '\0')
		{
			if (s[j] == accept[i])
				k++;
			i++;
		}
		j++;
	}

	return (k);
}
