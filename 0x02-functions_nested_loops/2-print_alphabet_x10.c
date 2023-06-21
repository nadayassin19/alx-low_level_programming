#include "main.h"


/**
 * print_alphabet_x10 - is used to print the alphabet
 * 10 times in lowercase
 */

void print_alphabet_x10(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		int j = 97;

		for (; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar ('\n');
	}
}
