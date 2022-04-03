#include "main.h"
#include "stdio.h"
#include "stdlib.h"
int _atoi(char *s);
int change_coins(int cents, int *coins_values, int coin_count);
/**
 * main - Main program
 * @argc: An integer, the number of command line arguments
 * @argv: An array of pointer to the command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents_value;
	int coins_number = 0;
	int coins_values[] = {25, 10, 5, 2, 1};

	if (argc > 2)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	cents_value = atoi(argv[1]);
	coins_number = change_coins(cents_value, coins_values, coins_number);
	printf("%d\n", coins_number);
	exit(EXIT_SUCCESS);
}

/**
 * change_coins - convert cents to coins
 * @cents: An integer, the cents value
 * @coins_values: The list of exchange coins
 * @coin_count: The number of coin
 *
 * Return: An integer, the number of coins
 */
int change_coins(int cents, int *coins_values, int coin_count)
{

	if (cents > *coins_values)
	{
		if (cents % *coins_values == 0)
			coin_count += cents / *coins_values;
		else
		{
			coin_count += cents / *coins_values;
			return (change_coins(cents % *coins_values,
						&(*(coins_values + 1)), coin_count));
		}
	}
	else if (cents < *coins_values)
	{
		return (change_coins(cents, &(*(coins_values + 1)), coin_count));
	}
	else
	{
		coin_count += 1;
		return (coin_count);
	}
	return (coin_count);
}
