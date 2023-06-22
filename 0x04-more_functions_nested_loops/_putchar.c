#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	ssize_t bytes_written = write(1, &c, 1);

	if (bytes_written == -1)
	{
		return (-1);
	}
	return (1);
}
