#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * main - Main block
 * @argc: Integer, the number of command line arguments
 * @argv: An array of pointer
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s;
	int i = 1;
	int j;
	long result = 0;

	if (argc > 1)
	{
		while (i < argc)
		{
			s = *(argv + i);
			for (j = 0; *(s + j) != '\0'; j++)
			{
				if (!(*(s + j) >= 48 && *(s + j) <= 57))
				{
					printf("Error\n");
					exit(EXIT_FAILURE);
				}
			}
			result += strtol(s, NULL, 10);
			i++;
		}
		printf("%ld\n", result);

	}
	else
		printf("0\n");
	exit(EXIT_SUCCESS);
}
