#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - This function checks if a number is positive or negative
*
* Return: Always 0 if successful
*
* File_name: 0-positive_or_negative.c
*
* Author: Esther Ann Uduma
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
