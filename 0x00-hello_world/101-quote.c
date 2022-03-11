/*Printing with write*/
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Main programm
 * Return: 1
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int s = strlen(str);

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", s);
	return (1);
}
