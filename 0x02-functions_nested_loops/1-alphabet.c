#include "main.h"

/**
 * print_alphabet - prints all alphabet in lowercase
 */

void print_alphabet(void)
{
	char lowercaseAlphabet;

	for (lowercaseAlphabet = 'a'; lowercaseAlphabet <= 'z'; lowercaseAlphabet++)
		_putchar(lowercaseAlphabet);

	_putchar('\n');
}
