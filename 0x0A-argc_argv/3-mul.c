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
		int ft_nb;
		int sc_nb;
		long result;

		ft_nb = strtol(argv[1], NULL, 10);
		sc_nb = strtol(argv[2], NULL, 10);

		result = ft_nb * sc_nb;
		printf("%ld\n", result);
		/*printf("%ld\n", (**(argv + 1) - '0') * (**(argv + 2) - '0'));*/
		exit(EXIT_SUCCESS);
	}
	printf("Error\n");
	exit(EXIT_FAILURE);
}


