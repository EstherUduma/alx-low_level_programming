#include "main.h"
#include <unistd.h>
/**
 * _putchar - This function writes the character c to stdout
 * @c: This is the character to be printed
 *
 * Return: 1 (Success)
 * -1 (Error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
