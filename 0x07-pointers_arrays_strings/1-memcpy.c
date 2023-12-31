#include "main.h"
/**
 *_memcpy - this function copies the memory area
 *@dest: this is where the memory is stored
 *@src: this is where the memory is copied
 *@n: this is the number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
