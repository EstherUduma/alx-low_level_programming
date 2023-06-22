#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * for multiples of 3, print Fizz
 * for multiples of 5, print Buzz
 * for multiples of 3 and 5, print FizzBuzz.
 * Return: 0
 */

int main(void)
{
	int i = 1;

	do {
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
		i++;
	} while (i <= 100);
	printf("\n");
	return (0);
}
