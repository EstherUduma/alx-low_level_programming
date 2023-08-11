#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
* check_zero - checks if any number is 0
*
* @argv: argument vector
*
* Return: nothing
*
* File_name: 101-mul.c
*
* Author: Esther Ann Uduma
*/

void check_zero(char *argv[])
{
	int i, n1 = 1, n2 = 2;

	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (argv[1][i] != '0')
		{
			n1 = 0;
			break;
		}
	}

	for (i = 0; argv[2][i] != '\0'; i++)
	{
		if (argv[2][i] != '0')
		{
			n2 = 0;
			break;
		}
	}

	if (n2 == 1 || n1 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
* init_array - initializes a new array by setting its memory to 0
*
* @a: char array
*
* @l: lenght of the char
*
* Return: pointer of a char array
*
* File_name: 101-mul.c
*
* Author: Esther Ann Uduma
*/

char *init_array(char *a, int l)
{
	int i;

	for (i = 0; i < l; i++)
	{
		a[i] = '0';
	}
	a[l] = '\0';
	return (a);
}

/**
* checknumber - checks the length of a number, checks if its base 10
*
* @argv: argument vector
*
* @n: array index
*
* Return: length of the number
*
* File_name: 101-mul.c
*
* Author: Esther Ann Uduma
*/

int checknumber(char *argv[], int n)
{
	int l;

	for (l = 0; argv[n][l] != '\0'; l++)
	{
		if (!isdigit(argv[n][l]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	return (l);
}

/**
* main - Entry point. This multiplies two positive numbers
*
* @argv: argument vector
*
* @argc: argument count
*
* Return: 0
*
* File_name: 101-mul.c
*
* Author: Esther Ann Uduma
*/

int main(int argc, char *argv[])
{
	int ln1, ln2, lnout, add, addl, i, j, k, ca;
	char *nout;

	if (argc != 3)
		printf("Error\n"), exit(98);
	ln1 = checknumber(argv, 1), ln2 = checknumber(argv, 2);
	check_zero(argv), lnout = ln1 + ln2, nout = malloc(lnout + 1);
	if (nout == NULL)
		printf("Error\n"), exit(98);
	nout = init_array(nout, lnout);
	k = lnout - 1, i = ln1 - 1, j = ln2 - 1, ca = addl = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (nout[k] - '0') + addl;
				if (add > 9)
					nout[k - 1] = (add / 10) + '0';
				nout[k] = (add % 10) + '0';
			}
			i = ln1 - 1, j--, addl = 0, ca++, k = lnout - (1 + ca);
		}
		if (j < 0)
		{
			if (nout[0] != '0')
				break;
			lnout--;
			free(nout), nout = malloc(lnout + 1), nout = init_array(nout, lnout);
			k = lnout - 1, i = ln1 - 1, j = ln2 - 1, ca = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + addl;
			addl = add / 10, nout[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", nout);
	return (0);
}
