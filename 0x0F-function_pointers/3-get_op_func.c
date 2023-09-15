#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform
 *               an operation rewuested by the user.
 * @s: an operator passed as an argument
 * Return: A pointer to the function which corresponds to the
 *         operator given as one of the parameters
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
	int i;

	i = 0;
	while (i < 5)
	{
		if (*(ops[i].op) == *s && s[0] != '\0')
			return (ops[i].f);
		i++;
	}
	return (0);
}
