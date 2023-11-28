#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int j;
	int n;
	int rwr;

	if (!filename)
		return (-1);

	j = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (j == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	rwr = write(j, text_content, n);

	if (rwr == -1)
		return (-1);

	close(j);

	return (1);
}
