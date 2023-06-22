#include <stdio.h>
#include "main.h"

/**
 * main - Entry point & prints numbers from 1 to 100.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i;

	i = 1;
	for (; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
