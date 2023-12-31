#include <stdio.h>
#include "main.h"

/**
* main - prints all arguments it receives
*
* @argc: number of arguments
*
* @argv: array of arguments
*
* Return: Always 0 if successful
*
* File_name: 2-args.c
*
* Author: Esther Ann Uduma
*/

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
