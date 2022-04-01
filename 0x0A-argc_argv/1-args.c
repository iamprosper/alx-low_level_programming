#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Main block
 * @argc: An integer, the number of command line arguments
 * @argv: An array of pointers
 *
 * Return: 0 in case of success, 1 in case of failure
 */
int main(int argc, char __attribute__((__unused__)) **argv)
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
