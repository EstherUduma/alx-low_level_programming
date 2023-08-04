#include <stdio.h>
#include "main.h"

/**
* main - prints program name followed by new line
*
* @argc: number of arguments
*
* @argv: array of arguments
*
* Return: Always 0 if successful
*
* File_name: 0-whatsmyname.c
*
* Author: Esther Ann Uduma
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
