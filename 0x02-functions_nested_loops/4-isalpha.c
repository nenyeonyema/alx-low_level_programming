#include "main.h"
#include <unistd.h>

/**
 * _isalpha - Checks if character is uppercase
 *
 * @c: checks for alpha characters
 *
 * Return: 1 if @c is uppercase, otherwise 0
 */

int _isalpha(int c)
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
