#include "main.h"

/**
 * _strlen - this fubctiona finds the length of a string
 * @s: function parameter
 * Return: string_len 0
 */

int _strlen(char *s)
{
	int string_len;

	string_len = 0;
	while (s[string_len] != '\0')
	{
		string_len++;
	}
	return (string_len);
}
