#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	int result = 0;

	do {
		if (c >= 'A' && c <= 'Z')
			result = 1;
		else
			result = 0;
	} while (0);
	return (result);
}
