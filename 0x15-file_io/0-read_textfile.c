#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard otput
 *
 * @filename: the file name
 * @letters: the no of letters it could read and print
 *
 * Return: the printed text or 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufer;

	int x, y, z;

	bufer = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}
	if (bufer == NULL)
	{
		return (0);
	}
	x = open(filename, O_RDONLY);
	y = read(x, bufer, letters);
	z = write(STDOUT_FILENO, bufer, y);

	if (x < 0 || y < 0 || z < 0 || z != y)
	{
		free(bufer);

		return (0);
	}
	free(bufer);
	close(x);

	return (z);
}
