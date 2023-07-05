#include "main.h"

/**
 * _puts_recursion - a function that prints a string,followed by a new line.
 *
 * Return: nothing.
 *
 * @s: is the pointer of the variable containg,
 * the value to be printed.
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (i >= 0)
	{
		if (s[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(s[i]);
		i++;
	}
	else
		_putchar('\n');
}
