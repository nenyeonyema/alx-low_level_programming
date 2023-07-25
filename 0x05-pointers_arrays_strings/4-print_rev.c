#include "main.h"

/**
 * print_rev - this function prints the reverse of a string
 * @s: fubction parameter
 * Return: s
 */

void print_rev(char *s)
{
	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	for (i = j - 1; s[i] >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
