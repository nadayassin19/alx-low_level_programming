#include "main.h"

/**
 * print_sign - checks the sign of a given number.
 *
 * Return: 1 if the number is +ve
 * 0 if the number is 0
 * -1 if the number is -ve
 *
 * @n: the given number to be checked.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	return ('\n');
}
