#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: the number of summed argument
 *
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	var_start(arglist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arglist, int);

	va_end(arglist);

	return (sum);
}

