#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers -  a function that prints numbers, followed by a new line
 * @separator: a string
 * @n: number of arguments
 * @...: A variable number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print;

	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print, int));
		if (i != (n - 1) && separartor == NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(print);

}
