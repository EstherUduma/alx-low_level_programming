#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the minimum number of coins
*
* @argc: number of input
*
* @argv: string
*
* Return: Always 0 if successful
*
* File_name: 100-change.c
*
* Author: Esther Ann Uduma
*/

int main(int argc, char *argv[])
{
	int coins = 0, cents;

	if (argc > 2 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 2)
	{
		if (atoi(argv[1]) > 0)
		{
			cents = atoi(argv[1]);
			coins = cents / 25;
			cents = cents % 25;
			coins = cents + cents / 10;
			cents = cents % 10;
			coins = coins + cents / 5;
			cents = cents % 5;
			coins = coins + cents / 2;
			cents = cents % 2;
			coins = coins + cents / 1;
			printf("%d\n", coins);
		}
		else if (atoi(argv[1]) <= 0)
		{
			printf("0\n");
		}
	}
	return (0);
}
