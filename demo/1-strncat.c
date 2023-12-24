#include "main.h"

/**
 * _strncat - Concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: function parameter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen, i;

	for (destlen = 0; dest[destlen] != '\0'; destlen++)
	{

	}
	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[destlen + i] = src[i];
	}
	return (dest);
}
