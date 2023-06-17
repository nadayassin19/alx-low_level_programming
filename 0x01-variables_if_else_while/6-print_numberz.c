#include <stdio.h>

/**
 * main - Entry point and prints all single digit numbers
 * of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		putchar(i);
	}
	putchar ('\n');

	return (0);
}

