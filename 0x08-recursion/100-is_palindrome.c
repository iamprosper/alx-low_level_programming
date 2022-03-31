#include "main.h"
#include <stdio.h>
int move_next(char *s, int i);
int check_palindrome(char *s, int n, int mid);
/**
 * is_palindrome - Check wheter a string is a palindrome or not
 * @s: A char pointer
 *
 * Return: 1 in case of success, 0 in case of failure
 */
int is_palindrome(char *s)
{
	int i = 0;

	i = move_next(s, i);
	if (i == 0)
		return (1);
	return (check_palindrome(s, i, 0));
}
/**
 * move_next - Count the length of a string
 * @s: A char pointer
 * @i: An integer
 *
 * Return: The length of the string
 */
int move_next(char *s, int i)
{
	if (*s != '\0')
	{
		i++;
		return (move_next(&(*(s + 1)), i));
	}
	return (i);
}
/**
 * check_palindrome - Check wheter a string is a palindrome or not
 * @s: A char pointer
 * @n: An integer
 * @mid: An integer, the mid of the string
 *
 * Return: wheter or note the string is palindrome
 */
int check_palindrome(char *s, int n, int mid)
{
	if (mid  < n / 2)
	{
		/*
		 *printf("n : %d, mid : %d - ", n, mid);
		 *printf("char up :%c - ", *(s + mid));
		 *printf("char end: %c\n", *(s + (n - mid - 1)));
		 */
		if (*(s + mid) == *(s + (n - mid - 1)))
		{
			mid++;
			return (check_palindrome(s, n, mid));
		}
		return (0);
	}
	return (1);

}
