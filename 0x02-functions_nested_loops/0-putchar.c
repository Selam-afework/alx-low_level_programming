#include "main.h"

/**
 * main -  Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *st = "_putchar";

	while (*st)
	{
		_putchar(*st);
		st++;
	}
	_putchar('\n');
	return (0);
}
