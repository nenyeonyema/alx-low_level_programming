#include <stdio.h>

/**
 * main - Prints bas ten single digits
 *
 * Return: 0
 */

int main(void)
{
int number = 0;
while (number < 0)
{
putchar(number + '0');
number++;
}
putchar('\n');
return (0);
}
