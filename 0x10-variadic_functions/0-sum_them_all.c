#include "varadic_functions.h"

/**
 * sum_them_all - sum numbers of all parameters
 * @n: number of arguments passed to the function
 * @...: integer variables to calculate the sum of
 * Return: if n == 0 - 0.
 *         Otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list xy;
	unsigned int i, sum = 0;

	va_start(xy, n);

	for (i = 0; i < n; i++)
		sum += va_arg(xy, int);

	va_end(xy);

	return (sum);
}
