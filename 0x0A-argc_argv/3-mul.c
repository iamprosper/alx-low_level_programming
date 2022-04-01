#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - The main program
 * @argc: An integer, the number of command line arguments
 * @argv: An array of pointers
 *
 * Return: 0 in case of success, 1 in case of failure
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (**(argv + 1) - '0') * (**(argv + 2) - '0'));
		exit(EXIT_SUCCESS);
	}
	printf("Error\n");
	exit(EXIT_FAILURE);
}
