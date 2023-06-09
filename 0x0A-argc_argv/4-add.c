#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: no of arguments passed
 * @argv: command line arguments
 *
 * Return: either 0 or 1
 */

int main(int argc, char *argv[])
{
	if (argc < 1)
	{
		printf("0\n");

	}
	else
	{
		int i, sum;

		for (i = 0; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
