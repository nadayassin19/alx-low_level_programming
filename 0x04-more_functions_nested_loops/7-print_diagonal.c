#include "main.h"

/**
 * print_diagonal - is a func draws a diagonal line,
 *  on the terminal.
 *
 * Return: nothing.
 *
 * @n: is the number of times the character \ should be printed.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			j = 0;
			for (; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (i < (n - 1))
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
}
