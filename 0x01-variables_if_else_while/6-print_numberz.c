#include <stdio.h>
/**
 * main - prints single digits from zero
 *
 * Return: 0
 */

int main(void)
{
int number = 0;
for (number = 0; number < 10; number++)
{
putchar(number + '0');
}
putchar('\n');
return (0);
}
