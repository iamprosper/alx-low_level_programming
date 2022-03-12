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
				if (i != 7)
					printf("%d%d%d, ", i, j, k);
				else
					printf("%d%d%d\n", i, j, k);
			}

	return (0);
}
