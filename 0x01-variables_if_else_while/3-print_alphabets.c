#include <stdio.h>
#include <stdlib.h>

/* More headers goes here */

/**
*main - Printing alphabet lower + Upper characters
*
*Return: 0
*/

int main(void)
{
	char s = 'a';
	char S = 'A';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(s);
		s++;
	}
	for (i = 0; i < 26; i++)
	{
		putchar(S);
		S++;
	}
	putchar('\n');

	return (0);
}
