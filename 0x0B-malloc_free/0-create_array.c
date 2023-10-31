#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size and assign char c
 * @size: size of array
 * @c: char to assign
 * Return: NULL if fail, pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		ptr[n] = c;
	return (ptr);
}
