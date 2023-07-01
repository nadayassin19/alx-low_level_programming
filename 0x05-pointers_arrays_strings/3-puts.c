#include "main.h"

/**
 * _puts - a function that prints a string,
 * followed by a new line.
 *
 * Return: nothing.
 *
 * @str: is the variable containing the string,
 * I need to print.
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		/*if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}*/
		_putchar(str[i]);
		i++;
	}
}
