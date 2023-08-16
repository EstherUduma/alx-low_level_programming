#include "3-calc.h"

/**
* op_add - this function returns the sum of a and b
*
* @a: first integer
*
* @b: second integer
*
* Return: if successful 0, otherwise 1.
*
* File_name: 3-op_functions.c
*
* Author: Esther Ann Uduma
*/

op_add(int a, int b)
{
	int c;

	c = a + b;
	printf("%d\n", c);

	return (0);
}

/**
* op_sub - this function returns the difference of a and b
*
* @a: first integer
*
* @b: second integer
*
* Return: if successful 0, otherwise 1.
*/

int op_sub(int a, int b)
{
	int c;

	c = a - b;
	printf("%d\n", c);

	return (0);
}

/**
* op_mul - this function returns the product of a and b
*
* @a: first integer
*
* @b: second integer
*
* Return: if successful 0, otherwise 1.
*/

int op_mul(int a, int b)
{
	int c;

	c = a * b;
	printf("%d\n", c);

	return (0);
}

/**
* op_div - this function returns the result of the division of a by b
*
* @a: first integer
*
* @b: second integer
*
* Return: if successful 0, otherwise 1.
*/

int op_div(int a, int b)
{
	int c;

	c = a / b;
	printf("%d\n", c);

	return (0);
}


