#include <stdio.h>

/**
 * main - entry point
 *
 * return: always (0) success
 */

int main(void)

{
	int i = 1;
	while (i <= 5)
	{
		int j = 1;
		while (j <=5)
		{
			int m =  i*j;
			printf("%d", m);
			j++;
		}
	}
	i++;
	printf("\n");
	return (0);
}
