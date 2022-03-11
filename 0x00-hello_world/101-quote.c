/*Printing with putchar*/
#include <stdio.h>

/**
 * main - Main programm
 * Return: 1
 */
int main(void)
{
	int i;
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int str_size = sizeof(str);

	for (i = 0; i < str_size; i++)
		putchar(str[i]);
	putchar('\n');
	return (1);
}
