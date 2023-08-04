#include "main.h"

/**
* _strlen - this function returns the length of a string
*
* @s: string whose length should be calculated
*
* Return: Always 0 if successful
*
* File_name: 2-strlen.c
*
* Author: Esther Ann Uduma
*/

int _strlen(char *s)
{
	int a = 0;

	if (s[a] != '\0')
		a++;

	return (a);
}
