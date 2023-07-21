#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - it sums all its parameters.
 *
 * @n: the no. of the arguments of the function.
 *
 * Return: int == the sum of parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
