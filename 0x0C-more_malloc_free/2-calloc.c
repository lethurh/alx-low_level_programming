#include  "main.h"
#include <stdlib.h>

/**
 *_memset - fill a block of memory with a specific value
 *@s: memory area to be filled
 *@b: cha to copy
 *@n: number of times to copy b
 *Return: a pointer to the allocated memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p = 0;

	while (p < n)
	{
		s[p] = b;
		p++;
	}
	return (s);
}

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
