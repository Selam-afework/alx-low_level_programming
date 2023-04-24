#include "main.h"

/**
 * append_text_to_file - appends text at the end of file
 *
 * @filename: name of the file
 * @text_content: the NULL terminated string
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, z = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	x = open(filename, O_WRONLY | O_APPEND);

	if (text_content != NULL)
	{
		while (text_content[z])
		{
			z++;
		}
		y = write(x, text_content, z);

		if (y != z)
		{
			return (-1);
		}
	}
	close(x);

	return (1);
}
