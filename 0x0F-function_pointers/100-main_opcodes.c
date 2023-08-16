#include "3-calc.h"

/**
* main - prints the opcodes of its own main function
*
* @argc: argument count
*
* @argv: argument vector
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != n - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
