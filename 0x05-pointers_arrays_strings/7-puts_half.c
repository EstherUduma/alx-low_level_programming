#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int len = 0;

	int half_len;

	while (str[len] != '\0')
	{
		len++;
	}
	half_len = (len - 1) / 2;
	for (int i = half_len + 1; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
