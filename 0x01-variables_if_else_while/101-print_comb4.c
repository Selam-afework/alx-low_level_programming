#include <stdio.h>
/**
 * main - main entry
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int m, n, p;

	for (m = 0; m <= 7; m++)
	{
		for (n = 0; n <= 8; n++)
		{
			for (p = 0; p <= 9; p++)
			{
				if ((m != n) && (n != p) && (m != p))
				{
					putchar(m + '0');
					putchar(n + '0');
					putchar(p + '0');
					if (m + n + p != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
