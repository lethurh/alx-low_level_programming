#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: string to be print
 * @f: function use to print
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}
