#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 * @....: a variable number of parameters to calculate the sum o
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list argum;


	va_start(argum, n);

	for (i = 0; i < n; i++)
		sum += va_arg(argum, int);

	va_end(argum);

	return (sum);
}
