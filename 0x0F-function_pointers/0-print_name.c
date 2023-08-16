#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: a string
 * @f: apointer to a function parameter
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
