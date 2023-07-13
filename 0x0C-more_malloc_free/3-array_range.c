#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: min value.
 *
 * @max: max value.
 *
 * Return: the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *nar;
	int i;

	i = 0;
	if (min > max)
		return (NULL);

	nar = malloc(sizeof(*nar) * ((max - min) + 1));

	if (nar == NULL)
		return (NULL);

	for (; min <= max; i++, min++)
		nar[i] = min;

	return (nar);
}
