#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: the number to be checked.
 *
 * Return: 1 when +ve
 *	: 0 when 0
 *	: -1 when -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
