#include "3-calc.h"
/**
 * main - Program entry point
 * @argc: The number of arguments
 * @argv: A pointer to the array of arguments in string
 *
 * Return: 98, 99 100 depending on the errors encountered,  1 in cas of success
 */
int main(int argc, char *argv[])
{
	int n1, n2, result;
	int (*get_op)(int, int) = NULL;

	if (argc == 4)
	{
		/*printf("Arg 1: %s\n", argv[1]);*/
		/*printf("Arg 2: %s\n", argv[2]);*/
		/*printf("Arg 3: %s\n", argv[3]);*/
		n1 = atoi(argv[1]);
		n2 = atoi(argv[3]);

		if ((argv[2][0] == '/' || argv[2][0] == '%')
				&& n2 == 0
				&& strlen(argv[2]) == 1)
		{
			printf("Error\n");
			exit(100);
		}

		get_op = get_op_func(argv[2]);
		if (get_op == NULL)
		{
			printf("Error\n");
			exit(99);
		}

		result = get_op(n1, n2);
		printf("%d\n", result);
		return (EXIT_SUCCESS);
	}
	printf("Error\n");
	exit(98);
}
