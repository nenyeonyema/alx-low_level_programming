#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: unsigned integer parameter variable
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *alloc = malloc(b);
	if (alloc == NULL)
		exit(98);
	return (alloc);
}
