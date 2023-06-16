#include <stdio.h>

/**
 * main - Entry point and prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase[26] = "abcdefghijklmnopqrstuvwxyz";
	char uppercase[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	for (; i < 26; i++)
	{
		putchar(lowercase[i]);
	}

	for (; i < 26; i++)
	{
		putchar(uppercase[i]);
	}
	putchar ('\n');
	return (0);
}
