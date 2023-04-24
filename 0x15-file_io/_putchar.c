#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes a char to stdout
 *
 * @c: a char to be printed
 *
 * Return: 1 or -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
