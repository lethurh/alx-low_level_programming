#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t r, nwr;
	char *ptr;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	ptr = malloc(sizeof(char) * (letters));
	if (!ptr)
		return (0);

	r = read(f, ptr, letters);
	nwr = write(STDOUT_FILENO, ptr, r);

	close(f);

	free(ptr);

	return (nwr);
}
