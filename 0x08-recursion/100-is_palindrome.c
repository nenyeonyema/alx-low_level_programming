
#include "main.h"

/**
 * _strlen_recursion - a function that gets length of string
 * @s: the string
 * Return: length of strength
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_string - compare each character of the string
 * @s: string
 * @first: the first iterator
 * @last: the last iterator
 * Return: 0
 */

int compare_string(char *s, int first, int last)
{
	if (*(s + first) == *(s + last))
	{
		if (first == last || first == last + 1)
			return (1);
		return (0 + compare_string(s, first + 1, last - 1));
	}
	return (0);
}

/**
 * is_palindrome -  a function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: a pointer string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
