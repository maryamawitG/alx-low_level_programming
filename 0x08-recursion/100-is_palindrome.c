#include "main.h"

/**
 * _strlen_recursion - size
 * @s:pointer to string
 * Return:recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * palindrome1 - palindrome
 * @s: pointer to string
 * @l:position
 * Return: On success 1.
 *	On error, -1 is returned, and errno is set appropriately
 */

int palindrome1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + l))
	{
		return (palindrome1(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: 1 if a string is a palindrome
 *	0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (palindrome1(s, len - 1));
}
