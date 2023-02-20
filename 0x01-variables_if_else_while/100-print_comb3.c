#include <stdio.h>

/**
 * main - main entry
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int m = 0, n = 8, m1 = 1, n1 = 9;

	while (m <= n)
	{
		m1 = m + 1;
		while (m1 <= n1)
		{
			putchar(m + '0');
			putchar(m1 + '0');
			if (m != n)
			{
				putchar(',');
				putchar(' ');
			}
			m1++;
		}
		m++;
	}

	putchar('\n');
	return (0);

}
