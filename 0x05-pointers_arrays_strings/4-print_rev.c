#include "main.h"

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 *
 * Return: nothing.
 *
 * @s : is the variable containing the string,
 * I need to print.
 */

void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
