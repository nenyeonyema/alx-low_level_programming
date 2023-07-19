#include "main.h"

/**
 * _abs - Absolute value of a number
 *
 * @i: Checks for only positive numbers
 *
 * Return: -a id @i is less than zero, else a;
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
}
