#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: +ve integer.
 */

void times_table(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		int j = 0;

		for (; j <= 9; j++)
		{
			_putchar(i * j);
			_putchar(',');
		}
		_putchar('\n');
	}
}
