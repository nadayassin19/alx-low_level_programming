#include "main.h"

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 *
 * Return: nothing.
 *
 * @s : is the variable containing the string,
 * I need to print.
 */

void print_rev(char *s)
{
	int leng, temp, i;

	leng = _strlen(s);
	i = 0;
	for (; i < (leng / 2); i++)
	{
		temp = s[i];
		s[i] = s[leng - i - 1];
		s[leng - i - 1]	= temp;
	}
}
