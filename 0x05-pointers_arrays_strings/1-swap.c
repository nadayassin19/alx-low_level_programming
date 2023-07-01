#include "main.h"

/**
 * swap_int - is a func that swaps the values of 2 ints.
 *
 * Return: nothing.
 *
 * @a: is the 1st variable.
 *
 * @b: is the 2nd variable.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = a;
	*a = b;
	*b = c;
}
