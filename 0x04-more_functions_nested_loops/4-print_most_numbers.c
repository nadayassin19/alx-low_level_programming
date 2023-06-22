#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 & 4.
 *
 * Return: nothing.
 */

void print_most_numbers(void)
{
	int i;

	if (i >= 48 && i <= 57 && i != 50 && i != 52)
	{
		for (; i <= 57; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

}
