/*The included header is a file made in my program*/

#include "main.h"
#include "string.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * it implements a function called _putchar & this function
 * is implemented from the file _putchar.c
 **/

int main(void)
{
	char sent[] = "_putchar";

	/* To find the length of an array*/
	int length = sizeof(sent) / sizeof(sent[0]);
	int i = 0;

	for (; i < length; i++)
	{
		_putchar(sent[i]);
	}
	_putchar('\n');
	return (0);
}
