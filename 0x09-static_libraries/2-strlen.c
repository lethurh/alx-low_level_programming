#include "main.h"

/**
  * _strlen - return the lenth of the string as an int value
  * @s: the string to measure.
  * Return: Int value of the lenth.
  */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

