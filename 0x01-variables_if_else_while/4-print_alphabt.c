#include <stdio.h>

/**
 * main - prints all letters except q and e
 *
 * Return: 0
 */

int main(void)
{
char lt = 'a';

while (lt <= 'z')
{
if (lt != 'q' && lt != 'e')
{
putchar(lt);
}
lt++;
}
putchar('\n');
return (0);
}
