#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* More headers goes here */

/**
*main - Main programm
*
*Return: 0
*/

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Your code goes here */
	last_digit = n % 10;
	printf("Last digit of %d is %d and is ", n, last_digit);

	if (last_digit > 5)
		printf("greater than 5\n");
	else if (last_digit < 6)
	{
		if (last_digit == 0)
			printf("0\n");
		else
			printf("less than 6 and not 0\n");
	}

	return (0);
}
