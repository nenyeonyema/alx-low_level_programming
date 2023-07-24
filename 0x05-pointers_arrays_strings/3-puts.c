#include "main.h"
#include <stdio.h>
/**
 * _puts - this function prints strings to the stdout
 * @str: function parameter or pointer
 * Return: str
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
