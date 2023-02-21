#include "main.h"

/**
 * print_alphabet_x10 - a function printing the alphabet 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char  alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);

			alphabet++;
		}
	i++;
	}
	_putchar('\n');
}
