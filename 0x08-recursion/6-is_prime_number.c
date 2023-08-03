#include "main.h"

/**
* _prime - this function checks if a number is a prime number
*
* @n: number to be checked
*
* @a: divisor to check number n
*
* Return: Always 1 if prime, and 0 if not
*
* File_name: 6-is_prime_number.c
*
* Author: Esther Ann Uduma
*/

int _prime(int n, int a)
{
	if (n % a == 0)
	{
		if (n == a && n == 1)
			return (0);
		else if (n == a)
			return (1);
		else
			return (0);
	}

	return (_prime(n, a + 1));
}

/**
* is_prime_number - returns 1 if the integer is a prime number, or 0 if not
*
* @n: the input integer
*
* Return: Always 1 if prime, and 0 if not
*
* File_name: 6-is_prime_number.c
*
* Author: Esther Ann Uduma
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);

	return (_prime(n, 2));
}
