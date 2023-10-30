#include "main.h"

/**
 * _memcpy - a fuction that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int t = n;

	for (; j < t; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
