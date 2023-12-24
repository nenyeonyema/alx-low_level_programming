#include "main.h"

/**
 * _isupper - Checks for uppercase letters
 * @c: Function argument
 *
 * Return: 1 if @c is upper, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
