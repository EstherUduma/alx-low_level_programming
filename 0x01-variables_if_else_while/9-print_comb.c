#include <stdio.h>

/**
* main - This function prints all possible combinations of single-digit numbers
*
* Return: Always 0 if successful
*
* File_name: 9-print_comb.c
*
* Author: Esther Ann Uduma
*/

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
