#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all
 * the arguments of the program.
 * @ac: parameter 1
 * @av: pointer variable
 * double pointer parameter
 * Return: a char pointer
 */

char *argstostr(int ac, char **av)
{
	char *concat_str;
	int i, n, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;

	concat_str = malloc(sizeof(char) * len + 1);
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			concat_str[k] = av[i][n];
			k++;
		}
		if (concat_str[k] == '\0')
		{
			concat_str[k++] = '\n';
		}
	}
	return (concat_str);
}
