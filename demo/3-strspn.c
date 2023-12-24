#include "main.h"

/**
 * _strspn -  a function that gets the length of a prefix substring.
 * @s: gets the length of string
 * @accept: the lenghth of string
 * Return: accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
