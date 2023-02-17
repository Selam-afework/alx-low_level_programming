#include <stdio.h>

/**
 * main - main entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* declaring and initializing a var with the range of [a-z] [A-Z] */

	char alphabet = 'a';
	char alphabet_ = 'A';

	/* checking if the current value is <= 'z' */

	while (alphabet <= 'z')
	{
		putchar(alphabet);

		alphabet++;
	}

	while (alphabet_ <= 'Z')
	{
		putchar(alphabet_);

		alphabet_++;
	}

	putchar('\n');

	return (0);
}
