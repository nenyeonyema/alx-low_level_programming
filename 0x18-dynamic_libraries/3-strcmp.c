#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 when the same
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int b = 0;

	for (i = 0; s1[i] != '\0' && b == 0; i++)
		b = s1[i] - s2[i];
	return (b);
}

