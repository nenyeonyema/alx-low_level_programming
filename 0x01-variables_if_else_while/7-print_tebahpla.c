#include <stdio.h>

/**
 * main - prints reversed  lowercase letters
 *
 * Return: 0
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
