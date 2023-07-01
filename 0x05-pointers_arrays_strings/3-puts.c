#include "main.h"

/**
 * _puts - a function that prints a string,
 * followed by a new line.
 *
 * Return: nothing.
 *
 * @str: is the variable containing the string,
 * I need to print.
 */

void _puts(char *str)
{
	int i;

	i = 0;
	for (; i >= 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
