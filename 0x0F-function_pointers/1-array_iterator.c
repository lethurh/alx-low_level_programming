#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given array.
 * @array: array to interate through
 * @size: is the size of the array
 * @action:  is a pointer to the function you need to use
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !size || !action)
		return;

	while (size--)
		action(*array++);
}
