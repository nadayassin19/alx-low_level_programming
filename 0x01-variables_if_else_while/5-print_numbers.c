#include <stdio.h>

/**
 * main - Entry point and prints all single digit numbers
 * of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int s[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i = 0;

	for (; i < 10; i++)
	{
		printf(s[i]);
	}
	printf('\n');
	return (0);
}
