#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = 2 * result + (*b - '0');
		b++;
	}
	return (result);
}
