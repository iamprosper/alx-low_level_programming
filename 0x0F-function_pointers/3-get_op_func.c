#include "3-calc.h"
/**
 * get_op_func - A function that check the correct operator
 *
 * @s: A function pointer
 *
 * Return: A pointer to a function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && strlen(s) == 1)
	{
		/*printf("Inside\n");*/
		/*printf("s is %c - ",*s);*/
		/*printf("*ops[i].op is %c\n", *ops[i].op);*/
		/*printf("%i\n", *s == *ops[i].op);*/
		/*
		 * printf("Checking *s++ status: %i -
		 * Size of s: %lu\n", *s++ == '\0', sizeof(s));
		 */
		/*printf("*s is: %c - *s++: %c\n",*s, *s++);*/
		if (*s == *ops[i].op)
		{
			/*printf("Checked success\n");*/
			return (ops[i].f);
		}
		i++;
		/*printf("Checking the next op.....\n");*/
	}
	/*printf("Not correspondind\n");*/
	return (NULL);
}
