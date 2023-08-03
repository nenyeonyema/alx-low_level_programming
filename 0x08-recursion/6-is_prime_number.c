#include "main.h"

/**
 * _isprime - a function that prints a prime number
 * @n: the integer value
 * @divisor: checks for prime number
 * Return: 1 0r 0
 */

int _isprime(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (_isprime(n, divisor + 1));
}
/**
 * is_prime_number -  a function that returns 1
 * if the input integer is a prime number, otherwise return 0
 * @n: the passed argument
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	return (_isprime(n, 2));
}
