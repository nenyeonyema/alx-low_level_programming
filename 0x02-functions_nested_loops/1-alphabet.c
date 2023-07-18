#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - prints alphabets
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
