#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * Return: last digit of a number.
 *
 * @n: the given number we want to get its last digit
 */

int print_last_digit(int n)
{
	if (n < 10 && n >= 0)
		return (n);

	if (n < 0 && n > -10)
		return (n * -1);

	if (n >= 10)
		return (n % 10);

	if (n <= -10)
		return (n % 10 * -1);

	_putchar ('\n');
}
