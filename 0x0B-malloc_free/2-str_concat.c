#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: holds the base address of the first string
 * @s2: holds the base address of the second string
 * Return: a char pointer
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	str = (char *)malloc((i + j + 1) * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		str[k] = s1[k];
	}
	for (l = 0; l < j; l++)
	{
		str[k] = s2[l];
		k++;
	}

	return (str);
}
