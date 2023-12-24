#include "main.h"
#include <stdlib.h>

/**
 * str_free_grid - this function frees the memory allocation
 * @grid: double pointer
 * @height: number of rows
 * Return: void
 */

void str_free_grid(char **grid, size_t height)
{
	if (grid != NULL || height != 0)
	{
		for (; height > 0; height--)
		free(grid[height]);
			free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - a function that splits a string into two.
 * @str: a string variable
 * Return: a double pointer
 */

char **strtow(char *str)
{
	size_t len, al, i, j, height;
	char **split;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (len = height = 0; str[len] != '\0'; len++)
		if (str[len] != ' ' && (str[len + 1] == ' ' || str[len + 1] == '\0'))
		height++;
	{
		split = malloc((height + 1) * sizeof(char *));
	}
		if (split == NULL)
		{
			free(split);
			return (NULL);
		}
	for (i = al = 0; i < height; i++)
	{
		for (len = al; str[len] != '\0'; len++)
		{
			if (str[len] == ' ')
				al++;
			if (str[len] != ' ' && (str[len + 1] == ' ' || str[len + 1] == '\0'))
			{
				split[i] = malloc((len - al + 2) * sizeof(char));
				if (split[i] == NULL)
				{
					str_free_grid(split, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; al <= len; al++, j++)
			split[i][j] = str[al];
		split[i][j] = '\0';
	}
	split[i] = NULL;
	return (split);
}
