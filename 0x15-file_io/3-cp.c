#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_buffer - allocates bytes for buffer
 *
 * @file: file name for storing buffer
 *
 * Return: buffer pointer
 */

char *create_buffer(char *file)
{
	char *bufer;

	bufer = malloc(sizeof(char) * 1024);

	if (bufer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);

		exit(99);
	}
	return (bufer);
}

/**
 * close_file - closing file descriptors
 *
 * @f: file descriptor that is closing
 */

void close_file(int f)
{
	int x = close(f);

	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close f %d\n", f);

		exit(100);
	}
}

/**
 * main - copies file to another file
 *
 * @argc: no of arguments
 * @argv: array of pointers
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int r, w, from, to;

	char *bufer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	bufer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, bufer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (r > 0)
	{
		if (r == -1 || from == -1)
		{
			dprintf(STDERR_FILENO, "ERROR: Can't read from file %s\n", argv[1]);
			free(bufer);
			exit(98);
		}
		w = write(to, bufer, r);
		if (w == -1 || to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(bufer);
			exit(99);
		}
		r = read(from, bufer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(bufer);
	close_file(from);
	close_file(to);
	return (0);
}
