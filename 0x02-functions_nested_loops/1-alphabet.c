#include "main.h"

/**
 * print_alphabet: is a function used to print the alphabet
 * in lowercase. And it's called in the main function
 */

void print_alphabet(void)
{
	int i = 97; /*the ASCII value of a*/

	for (; i < 123; i++)
	{
		_putchar('i');
	}
	_putchar('\n');
	print_alphabet();
}
