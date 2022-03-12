#include <stdio.h>

/**
*main - Printing all uniq combinations of three digits
*
*Return: 0
*/

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 9 ; i++)
		for (j = i + 1; j <= 8; j++)
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
					/*printf("%d%d%d, ", i, j, k);*/
				}
				else
					putchar('\n');
			}

	return (0);
}
