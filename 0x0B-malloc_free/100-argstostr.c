#include "main.h"
#include <stdlib.h>

/**
* argstostr - function that concatenates all the arguments
*
* @ac: input
*
* @av: double pointer array
*
* Return: 0
*
* File_name: 100-argstostr.c
*
* Author: Esther Ann Uduma
*/

char *argstostr(int ac, char **av)
{
	int a, i, k, n;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	a = ac;
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			a++;
	}

	p = malloc(a + 1);
	if (p == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			p[k++] = av[i][n];
		p[k++] = '\n';
	}
	p[k] = '\0';

	return (p);
}
