#include <stdio.h>

/**
*main - Printing the digits of base 16 in lower case
*
*Return: 0
*/

int main(void)
{
	int i;

	for (i = 0; i < 16 ; i++)
		printf("%x", i);
	printf("\n");

	return (0);
}
