#include "main.h"

/**
 * print_line - is a func draws a straight line in the terminal.
 *
 * Return: nothing.
 *
 * @n: is the number of times the character _ should be printed.
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		i = 0;
		for (; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
