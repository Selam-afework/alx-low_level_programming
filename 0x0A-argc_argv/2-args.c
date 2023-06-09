#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments given
 *
 * @argc: no of arguments given
 * @argv: command line arguments given
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int no;

	for (no = 0; no < argc; no++)
	{
		printf("%s\n", argv[no]);
	}
	return (0);
}
