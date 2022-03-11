#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Main program
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d is ", n);
	if (n < 0)
		printf("negative\n");
	else if (n == 0)
		printf("zero\n");
	else
		printf("positive\n");

	return (0);
}
