#include "variadic_functions.h"

/**
* print_name - function that prints a name
*
* @n: the number of values to be summed up
*
* @...: extra number of values
*
* Return: 0 if n == 0, else sum
*
* File_name: 0-sum_them_all.c
*
* Author: Esther Ann Uduma
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, sum = 0;

	va_start(arg, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(arg, int);

	va_end(arg);

	return (sum);
}
