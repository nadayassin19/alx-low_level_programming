#include "main.h"

/**
 * print_sign: prints the sign of a number
 *
 * Return: 1 when +ve
 * 	 : 0 when 0
 * 	 : -1 when -ve
 *
 * @n: is the number to be checked
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	_putchar('\n');
}
