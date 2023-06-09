#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed
 *
 * @argc: no of aguments passed
 * @argv: command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = argc - 1;

	(void) argv;

	printf("%d\n", i);

	return (0);
}
