#include <unistd.h>
#include <stdlib.h>

/**
 * _putchar - writes character c in standard output
 * @c: the character to print
 *
 * Return: success 1
 * on error, -1 is returned
 */

int_putchar(char c)
{
	return (write(1, &c, 1));
}
