#include "main.h"

/**
* str_recursion - returns length of string
*
* @s: string whose length should be calculated
*
* Return: string length
*
* File_name: 100-is_palindrome.c
*
* Author: Esther Ann Uduma
*/

int str_recursion(char *s)
{
	if (*s != '\0')
		return (1 + str_recursion(s + 1));

	return (0);
}

/**
* helper - helper function to check if a string is a palindrome
*
* @s: pointer to a string s
*
* @firsti: first index
*
* @lasti: last index
*
* Return: Always 1 if it's a palindrome and 0 if not
*
* File_name: 100-is_palindrome.c
*
* Author: Esther Ann Uduma
*/

int helper(char *s, int firsti, int lasti)
{
	if (s[firsti] != s[lasti])
		return (0);
	if (firsti >= lasti)
		return (1);

	return (helper(s, firsti + 1, lasti - 1));
}

/**
* is_palindrome - checks if a string is a palindrome
*
* @s: pointer to a string s
*
* Return: Always 1 if it's a palindrome and 0 if not
*
* File_name: 100-is_palindrome.c
*
* Author: Esther Ann Uduma
*/


int is_palindrome(char *s)
{
	int lasti = str_recursion(s) - 1;

	if (*s == '\0')
		return (1);

	return (helper(s, 0, lasti));
}
