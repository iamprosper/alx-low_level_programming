#include <stdio.h>

/**
*main - Printing all uniq combinations of two digits
*
*Return: 0
*/

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9 ; i++)
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
				/*printf("%d%d, ", i, j);*/
			}
			else
			{
				putchar('\n');
				/*printf("%d%d\n", i, j);*/
			}
		}
	return (0);
}
