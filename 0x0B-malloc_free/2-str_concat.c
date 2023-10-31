#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, r;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = r = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[r] != '\0')
		r++;
	str = malloc(sizeof(char) * (i + r + 1));

	if (str == NULL)
		return (NULL);
	i = r = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
