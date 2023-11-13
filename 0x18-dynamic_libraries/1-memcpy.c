#include "main.h"

/**
* _memcpy - this function copies memory area
*
* @dest: memory to copy from
*
* @src: memory to copy to
*
* @n: no. of bytes to copy
*
* Return: dest if successful
*
* File_name: 1-memcpy.c
*
* Author: Esther Ann Uduma
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
