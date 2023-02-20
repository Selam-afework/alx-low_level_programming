#include <stdio.h>

/**
 * main - main entry
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i = 0;

	while (i < 100)
	{
		putchar(i + '0');
		i++;
	}

	putchar('\n');
	return (0);

}
