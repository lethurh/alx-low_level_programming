#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address f memory to be filled
 * @b: the desire value
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
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
