#include <stdio.h>
#include <stdlib.h>

/* More headers goes here */

/**
*main - Main programm
*
*Return: 0
*/

int main(void)
{
	char s = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(s);
		s++;
	}
	putchar('\n');

	return (0);
}
