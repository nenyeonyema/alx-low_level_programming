#include "main.h"

/**
 * factorial - a function that returns the factorial of a number
 * @n: number of times
 * Return: -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
