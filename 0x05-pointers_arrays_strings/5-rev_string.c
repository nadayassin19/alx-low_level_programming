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
	char *str, temp;
	int length, i, right, left;

	length = _strlen(s);
	left = 0;
	right = length - 1;
	str = s;

	for (i = left; i < right; i++)
	{
		temp = str[i];
		str[i] = str[right];
		str[right] = temp;
		right--;
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
