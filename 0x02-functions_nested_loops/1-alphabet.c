#include "main.h"

/**
 * main - Entry point & implements the print_alphabet func
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - Is used to print the alphabet
 * in lowercase
 */

void print_alphabet(void)
{
	int i = 97;

	for (; i < 123; i++)
	{
		_putchar (i);
	}
	_putchar ('\n');
}
