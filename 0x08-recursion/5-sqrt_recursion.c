#include "main.h"

/**
* _sqrt_operation - finds the square root of a number
*
* @n: number
*
* @i: iterator
*
* Return: Always a if successful, and -1 if not
*
* File_name: 5-sqrt_recursion.c
*
* Author: Esther Ann Uduma
*/

int _sqrt_operation(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);

	return (_sqrt_operation(n, i + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
*
* @n: integer to be found
*
* Return: Always -1 if not a natural number
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_operation(n, 0));
}
