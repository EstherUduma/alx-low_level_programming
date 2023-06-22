#include "main.h"

/**
 * _isdigit - checks if numbers are 0 to 9
 * @c: char to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	int result = 0;

	do {
		if (c >= '0' && c <= '9')
			result = 1;
		else
			result = 0;
	} while (0);
	return (result);
}
