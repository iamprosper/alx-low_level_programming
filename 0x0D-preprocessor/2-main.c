#include <stdio.h>
#include "main.h"
/**
 * main - Programm entry point
 *
 * Return: 0
 */
int main(void)
{
	char s[] = __FILE__;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
	return (0);
}
