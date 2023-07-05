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
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
