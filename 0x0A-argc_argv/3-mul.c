#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two nos
 *
 * @argc: no of arguments passed
 * @argv: command line arguments passed
 *
 * Return: either 0 or 1;
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int first_no = atoi(argv[1]);

		int second_no = atoi(argv[2]);

		int mul = first_no * second_no;

		printf("%d\n", mul);

		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
