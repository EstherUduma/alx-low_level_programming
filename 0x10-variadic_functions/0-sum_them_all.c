#include "variadic_functions.h"

/**
* sum_them_all - function that returns the sum of all its parameters
*
* @n: number of values to sum
*
* Return: total_sum
*
* File_name: 0-sum_them_all.c
*
* Author: Esther Ann Uduma
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total_sum;
	va_list args;

	va_start(args, n);
	total_sum = 0;
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		total_sum = total_sum + va_arg(args, int);
	}

	va_end(args);

	return (total_sum);
}
