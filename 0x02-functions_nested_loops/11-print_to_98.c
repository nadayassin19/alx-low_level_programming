#include <stdio.h>


/**
 * print_to_98 -  prints all natural numbers to 98.
 *
 * Return: a series of numbers.
 *
 * @n: the passed number to start counting from.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		int i = n;

		for (; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	if (n > 98)
	{
		int i = n;

		for (; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("%d\n", n);
}
