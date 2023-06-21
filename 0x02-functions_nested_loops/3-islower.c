#include "main.h"

/**
 * main - Entry poin & implements _islower func
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	c = 100;
	_islower(c);
	return (0);
}

/**
 * _islower - a func used to check whether the letter
 * is lowercase or uppercase
 *
 * Return: 1 (Success) or 0 (false)
 *
 * @c: the character in ASCII code
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
