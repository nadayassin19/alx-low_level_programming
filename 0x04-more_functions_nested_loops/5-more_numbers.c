#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Return: nothing.
 */

void more_numbers(void)
{
	int i;

	i = 0;
	for (; i <= 14; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
