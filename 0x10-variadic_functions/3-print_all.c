#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * pr_int - print a integer type;
 * @val: a va_list struct to process;
 */
void pr_int(va_list val)
{
	printf("%d", va_arg(val, int));
}

/**
 * pr_char - print a char type;
 * @val: a va_list struct to process;
 */
void pr_char(va_list val)
{
	printf("%c", va_arg(val, int));
}

/**
 * pr_float - prints a double type;
 * @val: a va_list struct to process;
 */
void pr_float(va_list val)
{
	printf("%f", va_arg(val, double));
}

/**
 * pr_str - print a string type or (nil) if empty/NULL;
 * @val: a va_list struct to process;
 */
void pr_str(va_list val)
{
	char *str;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);

}

/**
 * print_all - print all argument that match with format.
 * @format: type to print out.
 * @...: arguments to print.
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{

	int i, j;
	va_list valist;
	f ops[] = {
		{"c", pr_char},
		{"i", pr_int},
		{"f", pr_float},
		{"s", pr_str},
		};

	va_start(valist, format);
	i = j = 0;
	while (format && format[j])
	{
		i = 0;
		while (j < 4)
		{
			if (ops[i].op[0] == format[j])
			{
				(ops[i].f)(valist);
				if (format[j + 1])
					printf(", ");
			}
			i++;
		}
		j++;

	}
	printf("\n");
	va_end(valist);
}
