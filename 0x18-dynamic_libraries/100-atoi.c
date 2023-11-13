#include "main.h"

/**
* _atoi - this function converts string to an integer
*
* @s: string to be converted
*
* Return: Integer
*
* File_name: 100-atoi.c
*
* Author: Esther Ann Uduma
*/

int _atoi(char *s)
{
	int sign = 1;
	unsigned int total = 0;
	int found_digit = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		if (*s >= '0' && *s <= '9')
		{
			found_digit = 1;
			total = total * 10 + (*s - '0');
		}
		else if (found_digit)
			break;
		s++;
	}

	return (total * sign);
}
