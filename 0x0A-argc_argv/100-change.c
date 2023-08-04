#include <stdio.h>
#include <stdlib.h>

/**
* main - this function prints minimum number coins to change
*
* @argc: number of input array
*
* @argv: string inputed
*
* Return: 0 if sucessful
*
* File_name: 100-change.c
*
* Author: Esther Ann Uduma
*/

int main(int argc, char *argv[])
{
	int num, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			result++;
			num -= coins[j];
		}
	}

	printf("%d\n", result);
	return (0);
}
