#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: the created file name
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success or -1 on failuer
 */

int create_file(const char *filename, char *text_content)
{
	int O, W, Z = 0;
	
	O = open(filename, O_CREAT | O_RDWR| O_TRUNC, 0600);

	W = write(O, text_content, Z);	

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (Z = 0; text_content[Z];)
		{
			Z++;
		}
	}
	if (O == -1 || W == -1)
	{
		return (-1);
	}
	close (O);

	return (1);
}
