#include "main.h"

/**
* print_most_numbers _ prints numbers between 0 and 9 but not 2 and 4
*
* Return: returns 0 for task done
*/

void print_most_numbers(void)
{

	int i = 0;

	for (; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{

		_putchar(i + 'O');
		}
	}
		_putchar('\n');
}
