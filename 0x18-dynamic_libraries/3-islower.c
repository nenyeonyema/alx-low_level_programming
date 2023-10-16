#include "main.h"
#include <unistd.h>

/**
 * _islower - Print letters if lowercase
 *
 * @c: checks the parameter c
 *
 * Return: 1 if @c is lowercase, otherwise 0
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
