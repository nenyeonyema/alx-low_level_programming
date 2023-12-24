#include "main.h"

/**
 * _isdigit - Checks for digit through 0 to 9
 *
 * @c: function argument
 * Return: 1 if @c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
