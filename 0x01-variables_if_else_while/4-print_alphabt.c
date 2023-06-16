#include <stdio.h>

/**
 * main - Entry point and writes all the alphabet
 * except letter e & q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha[24] = "abcdfghijklmnoprstuvwxyz";
	int i = 0;

	for (; i < 24 ; i++)
	{
		putchar(alpha[i]);
	}
	putchar ('\n');

	return (0);
}
