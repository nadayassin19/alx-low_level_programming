#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: +ve integer.
 */

void times_table(void)
{
	int i = 48;

	for (; i <= 57; i++)
	{
		int j = 48;

		for (; j <= 57; j++)
		{
			_putchar(i * j);
			_putchar(',');
			_putchar('\\');
		}
		_putchar('\n');
	}
}
