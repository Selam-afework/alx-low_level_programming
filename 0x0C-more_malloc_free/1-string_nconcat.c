#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * @n: size of s2
 *
 * Return: 0 or pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *string;

	int num, len, i, j;

	num = n;
	for (i = 0; string[i] != '\0'; i++)
        {
                return (i);
        }
	if (s1 == NULL) /* null string */
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (num < 0) /* negative bites */
	{
		return (NULL);
	}
	if (num >= _strlen(s2)) /* for big numbers */
	{
		num = _strlen(s2);
	}

	len = _strlen(s1) + num + 1;
	ptr = malloc(sizeof(*ptr) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < num; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
