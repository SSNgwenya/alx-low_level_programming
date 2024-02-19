#include "main.h"

/**
 * read_textfile - reads text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t i, n;
	char *d;

	if (!filename)
		return (0);

	x = open(filename, O_RDONLY);

	if (x == -1)
		return (0);

	d = malloc(sizeof(char) * (letters));
	if (!d)
		return (0);

	i = read(x, d, letters);
	n = write(STDOUT_FILENO, d, i);

	close(x);

	free(d);

	return (n);
}
