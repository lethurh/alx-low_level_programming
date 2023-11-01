#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int r, sum = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (r = 1; r < argc; r++)
		sum *=  atoi(argv[r]);
	printf("%d\n", sum);
	return (0);
}
