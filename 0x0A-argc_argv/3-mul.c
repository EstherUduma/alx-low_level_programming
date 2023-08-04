#include <stdio.h>
#include <stdlib.h>

/**
* main - prints multiplies two numbers
*
* @argc: number of arguments
*
* @argv: array of arguments
*
* Return: Always 0 if successful
*
* File_name: 3-mul.c
*
* Author: Esther Ann Uduma
*/

int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 3)
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));

	return (0);
}
