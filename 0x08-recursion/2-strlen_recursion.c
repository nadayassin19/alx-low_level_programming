#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * Return: int == the length of a string.
 * @s: is the string.
 */

int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (len + _strlen_recursion(1 + s));
	}
}
