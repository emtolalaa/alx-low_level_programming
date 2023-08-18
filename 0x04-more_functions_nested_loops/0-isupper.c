#include "main.h"

/**
 *  _isupper - To check if an alphabet is in upper case
 *  @c : The character to be chesked
 *  Return: 1 for uppercase and 0 for lowercase
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	return (1);

	return (0);
}
