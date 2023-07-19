#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: is the function argument
 *
 * Return: j
 */

int print_last_digit(int i)
{
	int j = i % 10;

	if (i < 0)
	{
		j = -j;
	}

	_putchar(j + '0');
	return (j);
}
