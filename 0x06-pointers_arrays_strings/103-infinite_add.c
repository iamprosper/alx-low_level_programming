#include <stdio.h>
#include <stdlib.h>

/**
 * count_str - Count the number of character
 * @str: a pointer to the string (number)
 *
 * Return: The size of the char (an integer)
 */
int count_str(char *str)
{
	int str_size = 0;

	while (*str != '\0')
	{
		str++;
		str_size++;
	}

	return (str_size);
}

/**
 * find_largest - Find the largest number
 * @n1_size: The size of n1
 * @n2_size: The size of n2
 * @smaller: A pointer to the smaller number
 * @bigger: A pointer to the bigger number
 *
 * Return: Nothing
 */
void find_largest(int n1_size, int n2_size, int *smaller, int *bigger)
{
	if (n1_size > n2_size)
	{
		*bigger = n1_size;
		*smaller = n2_size;
	}
	else if (n2_size > n1_size)
	{
		*bigger = n2_size;
		*smaller = n1_size;
	}
	else
	{
		*bigger = *smaller = n1_size;
	}

}

/**
 * compute_nb - This fonction adds every number
 * @res: A pointer to the result
 * @mod: A pointer to the rest
 * @str_res: A pointer to the converted result in (char)
 *
 * Return: Nothing
 */
void compute_nb(int *res, int *mod, char *str_res)
{
	/*Checking the additional result*/
	if (*res - 10 >= 0)
	{
		/*Getting the last part of the number*/
		*mod = 1;
		*str_res = (*res - 10) + '0';
	}
	else
	{
		*mod = 0;
		*str_res = *res + '0';
	}
}

/**
 * infinite_add - Adding numbers
 * @n1: a pointer to the first number
 * @n2: a pointer to the second number
 * @r: The buffer that store the result
 * @size_r: The size of the buffer
 *
 * Return: a char to the the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int bigger = 0, smaller = 0, top_value = 0, low_value = 0;
	int i = 0, j = 0, mod = 0, res_index = 0, res = 0;
	char *add_res;
	char str_res;
	int n1_size = count_str(n1);
	int n2_size = count_str(n2);

	find_largest(n1_size, n2_size, &smaller, &bigger);
	if (bigger + 1 >= size_r)
		return (0);
	add_res = (char *) malloc((sizeof(char)) * size_r);
	j = smaller - 1;
	res_index = bigger;

	for (i = bigger - 1; i >= 0; i--)
	{
		top_value = (*(n1 + i) - '0');
		res =  top_value + mod;

		/*Adding the second number, in case it is in range*/
		if (j >= 0)
		{
			low_value = (*(n2 + j) - '0');
			res = res + low_value;
			j--;
		}
		compute_nb(&res, &mod, &str_res);
		*(add_res + res_index) = str_res;
		res_index--;
	}
	if (mod == 0)
		r = &(*(add_res + 1));
	else
	{
		*add_res = '1';
		r = add_res;
	}

	free(add_res);
	return (r);
}
