#include "main.h"

/**
* _pow_recursion - returns the value of x raised to the power of y
*
* @x: value to be raised to the power of y
*
* @y: power to be raised to
*
* Return: Always -1 if y < 0, 1 if y = 0
*
* File_name: 4-pow_recursion.c
*
* Author: Esther Ann Uduma
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
