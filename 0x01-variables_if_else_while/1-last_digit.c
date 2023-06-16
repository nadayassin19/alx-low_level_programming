#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * & checks wether the last digit of the given number:
 * is less than 6 and not equal to 0
 * or equals 0 or is greater than 5
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %i and is greater than 5\n", n, lastDigit);
	}
	if (lastDigit < 6 && != 0)
	{
		printf("Last digit of %d is %i and
				is less than 6 and not 0\n", n, lastDigit);
	}
	if (lastDigit == 0)
	{
		printf("Last Digit of %d is %i and is 0 and is 0\n", n, lastDigit);
	}
	return (0);
}
