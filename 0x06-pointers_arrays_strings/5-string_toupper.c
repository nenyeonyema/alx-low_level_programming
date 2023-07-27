#include "main.h"

/**
 * string_toupper - converts a string to uppercase
 * @str: the string input to be converted
 * Return: void
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
