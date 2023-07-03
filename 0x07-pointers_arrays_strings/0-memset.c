#include "main.h"
/**
 * _memset - this function fills a block of memory with a specific value
 * @s: this is the starting address of memory to be filled
 * @b: this is the desired value
 * @n: this is the number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	do {
		s[i] = b;
		i++;
		n--;
	} while (n > 0);

	return (s);
}
