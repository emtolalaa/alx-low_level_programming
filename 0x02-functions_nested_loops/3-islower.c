#include "main.h"

/**
 * _islower function - will check for lowercase alphabet
 * @c: Character to be checked
 * Return: one if it is lowercase or zero if nnot
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
