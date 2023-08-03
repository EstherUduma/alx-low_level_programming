#include "main.h"

/**
* factorial - function that returns the factorial of a given number
*
* @n: factorial to be printed
*
* Return: 1 if n = 0, -1 if n < 0
*
* File_name: 3-factorial.c
*
* Author: Esther Ann Uduma
*/

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
