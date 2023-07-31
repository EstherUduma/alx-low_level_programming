#include <stdio.h>

/**
* main - This function prints the size of various types
*
* Return: Always 0 if successful
*
* File_name: 6-size.c
*
* Author: Esther Ann Uduma
*/

int main(void)
{
	char a;
	int b;
	long int c;
	double d;
	float e;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(e));

	return (0);
}
