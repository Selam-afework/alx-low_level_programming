#include "main.h"

/**
 * _strcmp - to compare two strings
 *
 * @s1: string no one
 *
 * @s2: string no two
 *
 * return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int comp = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		comp = *s1 - *s2;

	return (comp);
}
