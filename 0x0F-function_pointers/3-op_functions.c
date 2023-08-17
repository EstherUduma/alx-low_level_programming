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

int op_add(int a, int b)
{
	int c;

	c = a + b;
	return (c);
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
	return (c);
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
	return (c);
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
	return (c);
}

/**
* op_mod - this function returns the remainder of the division of a by b
*
* @a: first integer
*
* @b: second integer
*
* Return: if successful 0, otherwise 1.
*/

int op_mod(int a, int b)
{
	int c;

	c = a % b;
	return (c);
}
