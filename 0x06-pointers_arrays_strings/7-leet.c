#include "main.h"

/**
 * leet -  a function that encodes a string into 1337
 * @str: pointer
 * Return: uncoded string
 */

char *leet(char *str)
{
	int i, j;
	char *c = "aAeEoOtTlL";
	char *d = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = d[j];
			}
		}
	}
	return (str);
}
