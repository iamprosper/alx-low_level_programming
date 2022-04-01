#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - The main program
 * @argc: An integer variable, the number of command line arguments
 * @argv: An array of pointers
 *
 * Return: 0 in case of success, 1 in case of failure
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
