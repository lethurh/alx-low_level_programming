#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers.
 * @n: is the number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int p = 0;

	va_start(arg, n);
	while (p < n)
	{
		printf("%d", va_arg(arg, int));
		p++;
		if (p < n && (separator))
			printf("%s", separator);
	}
	putchar(10);
	va_end(arg);
}
