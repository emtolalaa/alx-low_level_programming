#include "main.h"
/**
*_isdigit - function that checks if a variable is a digit between zero and nine
*@c: variable to be checked
*Return: returns 1 if it is a digit  , 0 if not
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	return (1);

	return (0);
}
