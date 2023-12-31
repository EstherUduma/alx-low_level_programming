#include "main.h"

/**
* _memset - this function fills the first n bytes of the memory area
*
* @s: pointer to char memory
*
* @b: value to be filled
*
* @n: number of bytes to be filled
*
* Return: Always s if successful
*
* File_name: 0-memset.c
*
* Author: Esther Ann Uduma
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
