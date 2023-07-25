#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array of numbers
 * @a: function paramete1
 * @n: fubction parameter2
 * Return: a and n.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
