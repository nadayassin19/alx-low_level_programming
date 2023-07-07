#include "main.h"

/**
 * _abs - computes the absolute value of an int.
 *
 * Return: absolute value.
 *
 * @n: the given number to calculate the absolute of it.
 */

int _abs(int n)
{
	int a;

	if (n < 0)
	{
		a = n * -1;

		return (a);
	}
	else
		return (n);
	_putchar('\n');
}
