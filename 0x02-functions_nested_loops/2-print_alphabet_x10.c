#include "main.h"

/**
 * print_alphabet_x10 - a function printing the alphabet 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char  alphabet = 'a';
	{
		while (alphabet <= 'z')
		{
			for (int i = 0; i < 10; i++)
			{
				_putchar(alphabet);

				alphabet++;
			}
		}
	}
	_putchar('\n');
}
