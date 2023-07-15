#include <stdio.h>

/**
 * main - prints lower case letters
 *
 * Return: 0
 */

int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	putchar('\n');
	return (0);
}
