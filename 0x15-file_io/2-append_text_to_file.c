#include "main.h"

/**
 * append_text_to_file - appends text at end of a file
 * @filename: filename.
 * @text_content: added content.
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x;
	int n;
	int i;

	if (!filename)
		return (-1);

	x = open(filename, O_WRONLY | O_APPEND);

	if (x == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;

		i = write(x, text_content, n);

		if (i == -1)
			return (-1);
	}
	close(x);

	return (1);
}
