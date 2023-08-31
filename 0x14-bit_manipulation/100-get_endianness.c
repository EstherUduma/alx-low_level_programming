#include "main.h"

/**
* get_endianness - function that checks the endianness.
*
* Return: 0 if big endian, 1 if little endian
*
* File_name: 100-get_endianness.c
*
* Author: Esther Ann Uduma
*/

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
