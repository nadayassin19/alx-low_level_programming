#include <stdio.h>

/**
 * main - Entry point and prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	for (; i < 52; i++)
	{
		putchar(alphabet[i]);
	}

	putchar ('\n');
	return (0);
}
