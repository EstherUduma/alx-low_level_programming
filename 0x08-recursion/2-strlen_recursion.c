#include "main.h"
/**
  *_strlen_recursion - this function returns length of a string.
  *@s: this is the pointer to the string.
  *
  *Return: lenght of string.
  */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
