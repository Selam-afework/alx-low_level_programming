#include "main.h"
#include <stdio.h>

/**
 * main- function that prints the program name
 *
 * @argc: no of arguments
 * @argv: command line argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		printf("\nNo Extra Command Line Argument Passed Other Than Program Name");
	}
	return (0);
}
