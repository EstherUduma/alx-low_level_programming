#include "main.h"

/**
* _putchar - this function writes the character c to stdout
* @c: character to print
* Return: Always 1 if successful and -1 if on error
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
