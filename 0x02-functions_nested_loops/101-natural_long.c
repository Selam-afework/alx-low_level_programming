#include <stdio.h>
/**
 * main - main Entry
 *
 * @n: the number being evaluated
 *
 * Return: Always 0 (Success)
 */
int main(void)
        
{       
        int n, s;
        
	for ((n > 0); (n < 1024); n++)
        s = 0;

	{       
                if ((n % 3) == 0)
                {       
                        printf("%d, ", n);

			if ((n % 5) == 0)
			{
				printf("%d, ", n);

			}
			else if ((n % 5) != 0)
			{
				continue;
			}
                }
		else if ((n % 3) != 0)
                {       
			if ((n % 5) == 0)
			{
				printf("%d, ", n);
			}
			else if ((n % 5) != 0)
			{
				continue;
			}
		}
		s += n;
		
	}
	printf("%d ", s);
	return (0);
}
