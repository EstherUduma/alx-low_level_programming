#include "main.h"
/**
 * reverse_array - this function reverses  array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int index;
	int temp;

	for (index = 0; index < n--; index++)
	{
		temp = a[index];
		a[index] = a[n];
		a[n] = temp;
	}
}
