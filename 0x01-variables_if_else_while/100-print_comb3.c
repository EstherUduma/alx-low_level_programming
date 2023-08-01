#include <stdio.h>

/**
* main - This function prints all possible different combinations of two digits
*
* Return: Always 0 if successful
*
* File_name: 100-print_comb3.c
*
* Author: Esther Ann Uduma
*/

int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);
			if (a != '8' || b != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
