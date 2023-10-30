#include "main.h"

/**
 * _strncat - this fuction will concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that ill be concatenated to @dest.
 * @n: copy up to poistion 'n'
 * Return: a pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m = 0;
	int p = 0;

	while (dest[m] != '\0')
	{
		m++;
	}

	while (p < n && src[p] != '\0')
	{
		dest[m + p] = src[p];
		p++;

	}
	dest[m + p] = '\0';

	return (dest);
}
