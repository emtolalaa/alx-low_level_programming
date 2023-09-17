#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference between the two numbers
 * @a: the first number
 * @b: the second number
 * Return: the difference betwen a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the product of a and b
 * @a: the first number
 * @b: the second number
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the division between two numbers
 * @a: is the numerator and the first number
 * @b: is the denominator and second number
 * Return: the product of the division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder of the division of two numbers a and b
 * @a: is the first number
 * @b: is the second number
 *
 * Return: the number remaining after division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
