#include "main.h"

/**
 * _isupper - checks for uppercase character.
 *
 * Return: 1 if the letter is uppercase
 *	0 if the letter is not uppercase.
 *
 * @c: is the letter to be checked in ASCII code.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
