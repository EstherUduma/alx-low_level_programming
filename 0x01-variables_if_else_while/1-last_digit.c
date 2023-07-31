#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - This function assigns a random number to n each time it is executed
*
* Return: Always 0 if successful
*
* ld: last digit variable
*
* File_name: 1-last_digit.c
*
* Author: Esther Ann Uduma
*/

int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ld = n % 10;

	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	if (ld == 0)
		printf("Last digit of %d is %d and is 0\n", n, ld);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);

	return (0);
}
