#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all -  function that returns the sum of all its parameters.
 * @...:list of arguments
 * @n: number of arguments
 * Return: sum_them_all
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum_them_all = 0;
	unsigned int i;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (i = 0;  i < n; i++)
		sum_them_all += va_arg(arg, int);

	return (sum_them_all);
	va_end(arg);
}
