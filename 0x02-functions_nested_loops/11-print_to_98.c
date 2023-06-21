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
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
