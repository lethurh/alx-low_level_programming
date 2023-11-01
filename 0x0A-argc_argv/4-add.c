#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positve numbers.
 * @argc: count arguments passed in argv
 * @argv: string that holds the passed arguments
 * Return: 0 (success) else 1 (fail)
 */
int main(int argc, char *argv[])
{
	int j, q, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (j = 1; j < argc; j++)
	{
		for (q = 0; argv[j][q] != '\0'; q++)
		{
			if (!isdigit(argv[j][q]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[j]);
	}
	printf("%d\n", sum);
	return (0);
}
