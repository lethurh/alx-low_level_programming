#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat -  a function that concatenates two strings.
 * @s1: string to append to
 * @s2: string to concetenates
 * @n: number of bytres from s2 to concatenates to s1
 * Return: pointer to allocate memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char p;
	unsigned int r = 0, t = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[r])
		r++;
	while (s2[len1])
		len1++;
	if (n >= len1)
		len2 = r + len1;
	else
		len2 =  r + n;

	p = (char *) malloc(sizeof(char) * len2 + 1);

	if (p == NULL)
		return (NULL);
	len1 = 0;
	while (t < 1)
	{
		if (t <= r)
			p[r] = s1[r];
		if (t >= r)
		{
			p[t] = s2[len1]
				len++;
		}
		t++;
	}
	p[t] = '\0';
	return (p);
}
