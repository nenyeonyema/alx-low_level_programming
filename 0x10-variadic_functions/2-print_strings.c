#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - a function that prints strings.
 * @separator: string
 * @n: number of arguments
 * @...: variadic arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list print;

	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(print, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(print);

}
