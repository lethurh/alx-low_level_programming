#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p;
	int q;
	int rwr;

	if (!filename)
		return (-1);

	p = open(filename, O_WRONLY | O_APPEND);

	if (p == -1)
		return (-1);

	if (text_content)
	{
		for (q = 0; text_content[q]; q++)
			;

		rwr = write(p, text_content, q);

		if (rwr == -1)
			return (-1);
	}

	close(p);

	return (1);
}
