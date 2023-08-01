#include <stdio.h>

/**
* main - This function prints different combinations of 3 digits
*
* Return: Always 0 if successful
*
* File_name: 101-print_comb4.c
*
* Author: Esther Ann Uduma
*/

int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			for (c = b + 1; c <= '9'; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != '7' || b != '8' || c != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
