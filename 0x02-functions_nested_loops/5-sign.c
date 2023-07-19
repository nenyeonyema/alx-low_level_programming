#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: Checks for signs of a nuumber
 *
 * Return: 1 and 0 if @n is greater or equal zero, otherwise -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
