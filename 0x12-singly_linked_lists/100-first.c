#include "lists.h"
#include <stdio.h>

void first(void) __attribute__ ((constructor));
/**
 * first - prints a senstence before the main function is executed
 * function is executed
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
