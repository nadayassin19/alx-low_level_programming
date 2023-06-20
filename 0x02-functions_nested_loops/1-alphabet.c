#include "main.h"

/**
 * print_alphabet: is a function used to print the alphabet
 * in lowercase. And it's called in the main function
 */

void print_alphabet(void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyz";
	int length = 26;
	int i = 0;

	for (; i < length; i++)
	{
		_putchar(alph[i]);
	}
}

/**
 * main - Entry point & writes the alphabet
 * in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
