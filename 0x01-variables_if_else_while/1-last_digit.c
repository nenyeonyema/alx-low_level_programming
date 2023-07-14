#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assigns random numbers to a variable
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int id;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	id = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, id);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, id);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, id);
	}
	return (0);
}
