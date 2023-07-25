#include "main.h"

/**
 * puts_half - prints the half part of the string
 * @str: fubction parameter or pointer
 * Return: str
 */

void puts_half(char *str)
{
	int i, n;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	n = (count - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
