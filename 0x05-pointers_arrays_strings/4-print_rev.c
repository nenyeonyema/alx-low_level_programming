#include "main.h"

/**
 * print_rev - this fubction prints the reverse of a string
 * @s: fubction parameter
 * Return: s
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (i--; s[i] >= 0; i--)
	_putchar(s[i]);
	_putchar('\n');

}
