#include <stdio.h>
#include "main.h"

/**
* main - prints the number of arguments passed into it.
*
* @argc: number of arguments
*
* @argv: string of arguments
*
* Return: Always 0 if successful
*
* File_name: 1-args.c
*
* Author: Esther Ann Uduma
*/

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
