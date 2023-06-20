#include "main.h"

/**
 * main - Entry point & implements print_alphabet_x10 .
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 *print_alphabet_x10 - prints the alphabet in lowercase 10 times.
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
