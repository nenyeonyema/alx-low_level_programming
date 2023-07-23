#include <stdio.h>

/**
 * main - List all natural numbers below 1024
 *
 * Return: void
 */

int main(void)
{
	int sum = 0;
	int i;

	for (int i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("The sum of all multiples of 3 or 5 below 1024 is: %d\n", sum);
}

