#include "main.h"
/*#include <unistd.h>*/
/**
 * main - Main program
 *
 * Return: 0
 */
int main(void)
{
	char message[8] = "_putchar";
	int i;

	for (i = 0; i < 8 ; i++)
	{
		_putchar(message[i]);
	}
	_putchar('\n');

	return (0);
}

/*
 * int _putchar(char c)
 *
 * return (write(1, &c, 1));
 *
 * /
