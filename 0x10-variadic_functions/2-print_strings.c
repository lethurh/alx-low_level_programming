#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  a function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings.
 * @n: is the number of strings passed to the function.
 * @...: string to print
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int j;
	char *s;

	va_start(arg, n);
	j = 0;
	while (j < n)
	{
		s = va_arg(arg, char*);
		if (!s)
			printf("(nil)");
		else
			printf("%s", s);
		j++;
		if (j < n && separator)
			printf("%s", separator);
	}
	putchar(10);
	va_end(arg);
}
