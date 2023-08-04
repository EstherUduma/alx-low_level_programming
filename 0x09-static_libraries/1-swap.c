#include "main.h"

/**
* swap_int - this function swaps the value of 2 integers
*
* @a: first pointer
*
* @b: second pointer
*
* File_name: 1-swap.c
*
* Author: Esther Ann Uduma
*/

void swap_int(int *a, int *b)
{
	int swap1 = *a;
	int swap2 = *b;

	*a = swap2;
	*b = swap1;
}
