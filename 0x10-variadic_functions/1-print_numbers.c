#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * print_numbers - print numbers on a new line
 * @separator: to be between numbers as strings
 * @n: integers passed to function
 * @...: A number of integer variables to be printed
 */

void print_numbers(const *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
