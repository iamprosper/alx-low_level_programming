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
			if (i != 8)
				printf("%d%d, ", i, j);
			else
				printf("%d%d\n", i, j);

	return (0);
}
