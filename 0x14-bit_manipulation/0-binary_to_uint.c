#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: points to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if:
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len, base;

	if (b == NULL)
		return (0);

	ui = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base = 1; len >= 0; len--, base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] & 1)
			ui += base;
	}

	return (ui);
}
