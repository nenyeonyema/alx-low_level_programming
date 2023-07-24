#include "main.h"

/**
 * print_rev - this fubction prints the reverse of a string
 * @s: fubction parameter
 * Return: s
 */

void print_rev(char *s)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i -1; s[j] >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');

}
