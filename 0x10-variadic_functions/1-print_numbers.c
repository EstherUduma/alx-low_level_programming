#include "variadic_functions.h"

/**
* print_numbers - function that prints numbers
*
* @separator: separator
*
* @n: number of integers
*
* Return: void
*
* File_name: 1-print_numbers.c
*
* Author: Esther Ann Uduma
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
}
