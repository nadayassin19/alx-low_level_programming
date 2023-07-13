#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: 1st string.
 *
 * @s2: 2nd string.
 *
 * @n: the amount of bytes to be allocated.
 *
 * Return: a pointer to the allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int l1, l2, lout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;

	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	if (n > l2)
		n = l2;

	lout = l1 + n;

	sout = malloc(lout + 1);

	if (sout == NULL)
		return (NULL);

	for (i = 0; i < lout; i++)
		if (i < l1)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - l1];

	sout[i] = '\0';

	return (sout);
}
