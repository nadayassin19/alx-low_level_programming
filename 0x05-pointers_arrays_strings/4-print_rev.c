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
	int i, j, len;
	char temp;

	i = 0;
	j = 0;
	len = _strlen(s);
	j = len - 1;
	while (i < j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i++;
		j--;
	}
	_putchar(s);
	_putchar('\n');
}
