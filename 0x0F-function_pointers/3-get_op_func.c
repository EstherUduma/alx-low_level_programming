#include "3-calc.h"

/**
* get_op_func - function that selects the correct function
*
* @s: operator passed as argument to the program
*
* Return: function's pointer
*
* File_name: 3-get_op_func.c
*
* Author: Esther Ann Uduma
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 10)
	{
		if (s[0] == ops->op[i])
			break;
		i++;
	}

	return (ops[i / 2].f);
}
