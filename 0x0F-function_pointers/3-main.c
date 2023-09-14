#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - prints the result of simple operations
 * @argc: the number of arguments supplied to the program.
 * @argv: an array of pointers to the arguments
 * Return: 0 For Task Done
 */
int main(int argc, char **argv)
{
	int n1, n2, result;
	int (*res)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0');

	{
		printf("Error\n");
		exit(99);
	}

	res = get_op_func(argv[2]);
	if (res == 0)
	{
		printf("Error\n");
		exit(99);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	result = res(n1, n2);
	printf("%d\n", result);
	return (0);
}
