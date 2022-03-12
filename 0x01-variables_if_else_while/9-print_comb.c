#include <stdio.h>

/**
*main - Printing the digits of base 10 starting from 0, commas seperated
*
*Return: 0
*/

int main(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
		if (i != 9)
			printf("%d, ", i);
		else
			printf("%d\n", i);

	return (0);
}
