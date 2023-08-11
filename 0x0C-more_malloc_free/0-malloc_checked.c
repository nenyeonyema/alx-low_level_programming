#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: unsigned integer parameter variable
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *alloca;

	alloca = malloc(b);

	if (alloca == NULL)
		exit(98);

	return (alloca);
}
