#include <stdio.h>

/**
 * main - main entry
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i = 0;
	char alphabet = 'a';

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (alphabet <= 'f')
	{
		putchar(alphabet);

		alphabet++;
	}


	putchar('\n');
	return (0);

}
