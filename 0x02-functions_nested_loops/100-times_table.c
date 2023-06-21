#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * Return: the time table of numbers
 *	: 0 if the given number is less than 0
 *	or greater than 15.
 *
 * @n: the given number to get its timetable
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
		_putchar(' ');

	if (n > 0 && n < 15)
	{
		int i = 0;

		for (; i < 15; i++)
		{
			int j = 0;

			for (j; j < 15; j++)
			{
				_putchar(i * j);
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}

	}
}
