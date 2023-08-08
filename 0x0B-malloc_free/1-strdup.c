#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup -  a function that returns a pointer to a newly allocated space
 * in memory. which contains a copy of the string given as a parameter.
 * @str: pointer varaible which accepts an arrary of string.
 * Return: a char pointer
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	ptr = (char *)malloc((i + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		ptr[j] = str[j];
	}

	return (ptr);

}
