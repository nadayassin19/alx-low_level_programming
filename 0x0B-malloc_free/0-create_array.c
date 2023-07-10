#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of the array.
 *
 * @c: a char.
 *
 * Return: NULL if size = 0 or a pointer to the array od char,
 * or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		cr[i] = c;
	}

	return (cr);
}
