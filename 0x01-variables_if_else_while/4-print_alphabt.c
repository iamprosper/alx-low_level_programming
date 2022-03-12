#include <stdio.h>
#include <stdlib.h>

/* More headers goes here */

/**
*main - Printing alphabet without 'e' and 'q'
*
*Return: 0
*/

int main(void)
{
	char s = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		if (!(s == 'q' || s == 'e'))
			putchar(s);
		s++;
	}
	putchar('\n');

	return (0);
}
