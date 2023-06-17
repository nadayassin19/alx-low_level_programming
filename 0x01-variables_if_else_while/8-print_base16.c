#include <stdio.h>

/**
 * main - Entry point and prints all the numbers
 * of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char hexAlph[6] = "abcdef";

	while (i < 10)
	{
		putchar(i);
		i++;
	}

	for (; i < 6; i++)
	{
		putchar(hexAlph[i]);
	}
	putchar('\n');
	return (0);
}
