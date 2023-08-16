#include "3-calc.h"

/**
* main - simple operations
*
* @argc: argument counter
*
* @argv: argument variable
*
* Return: 0
*
* File_name: 3-main.c
*
* Author: Esther Ann Uduma
*/

int main(int argc, char *argv[])
{
	int a, b, c;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = f(a, b);
	printf("%d\n", c);
	return (0);
}
