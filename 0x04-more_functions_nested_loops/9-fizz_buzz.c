/*#include "main.h"*/
#include <stdio.h>

/**
 * fizz_buzz - fizz buzz program
 *
 * Return: None
 */

void fizz_buzz(void)
{
	int i = 0;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz\n");
			}
		}
		else
		{
			printf("%d ", i);
		}
	}
}


/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	fizz_buzz();

	return (0);
}
