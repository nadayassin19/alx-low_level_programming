#include <stdio.h>

/**
 * main - Entry point and print the alphabet
 * in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i = 0;

	for (; i < 26; i++)
	{
		putchar(alph[i]);
	}
	putcahr('\n');
	return (0);
}
