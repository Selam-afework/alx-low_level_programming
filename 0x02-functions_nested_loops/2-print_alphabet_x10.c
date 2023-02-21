#include "main.h"

/**
 * print_alphabet_x10 - a function printing the alphabet 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char  alphabet = 'a';
	int i = 0;
	{
		while (alphabet <= 'z')
		{
			while (i < 10)
			{
				_putchar(alphabet);

				alphabet++;
			}
			i++;
		}
	}
	_putchar('\n');
}
