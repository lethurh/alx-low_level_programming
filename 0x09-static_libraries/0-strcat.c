#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int j;
	int q;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	q = 0;
	{
		dest[j] = src[q];
		j++;
		q++;
	}
	dest[j] = '\0';
	return (dest);
}
