#include "main.h"


/**
 * _islower - a func used to check whether the letter
 * is lowercase or uppercase
 *
 * Return: 1 (Success) or 0 (false)
 *
 * @c: the character in ASCII code
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
