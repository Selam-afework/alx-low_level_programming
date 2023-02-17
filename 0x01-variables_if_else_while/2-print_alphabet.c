 #include <stdio.h>

/**
 * main - main entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* declaring and initializing a var with the range of [a-z] */

	char alphabet = 'a';

	/* checking if the current value is <= 'z' */

	while (alphabet <= 'z')
	{
		putchar(alphabet);

		alphabet++;
	}

	putchar('\n');

	return (0);
}
