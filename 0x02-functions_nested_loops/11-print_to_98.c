#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * prints inputed number 
 * @n: number to be printed
 * Return: Always 0 (Success)
 */
void print_to_98(int n)

{
	for (n = 0; n <= 98; n++)
	if (n < 10)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	else if ((n >= 10) && (n <= 98))
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
