#include "main.h"

/**
 * swap_int - swaps the values of variable uaing a pointer
 * @a: function parameter1
 * @b: function parameter2
 * Return: a and b
 */

void swap_int(int *a, int *b)
{
	int c;
	int *d = &c;

	*d = *a;
	*a = *b;
	*b = *d;
}
