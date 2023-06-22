#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 *
 * Return: 1 if c is a digit
 *	0 if otherwise.
 *
 * @c: is the number to be checked.
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
