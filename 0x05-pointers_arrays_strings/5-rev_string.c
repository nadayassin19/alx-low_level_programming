#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * Return: nothing.
 *
 * @s: input string.
 */

void rev_string(char *s)
{
	int length, i, j;

	length = _strlen(s);
	i = j = 0;
	char *newString, temp;

	newString = s;

	for (; i < (length - 1); i++)
	{
		temp = s[i];
		newString[length - i] = temp;
	}
}

/**
 * _strlen - a func gives the length of str.
 *
 * Return: the length of a str in int.
 *
 * @s: is the variable we want to know its length.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	for (; s[i] != '\0'; i++)
	{

	}
	return (i);
}
