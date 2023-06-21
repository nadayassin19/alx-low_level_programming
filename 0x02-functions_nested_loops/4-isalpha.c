#include "main.h"

/**
 * _isalpha - checks whether the character is alphabet or not
 *
 * Return: 1 if true or 0 if false
 *
 * @c: is the character in ASCII code
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar ('\n');
}
