#include "main.h"

/**
 * reset_to_98 - is a func that takes a pointer,
 * to an int as parameter,
 * and updates the value it points to to 98.
 *
 * Return: nothing
 *
 * @n: is the variable passes the desired value.
 */

void reset_to_98(int *n)
{
	printf("The value of n is %p\n", n);
	*n = 98;
}
