#include "main.h"


/**
 * _strlen_recursion - helper function that returns the length of a string
 * @s: string to compute the length
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * get_palindrome - helper function that checks each char for palindrome
 * @s: string to check
 * @i: input iterator
 * @strlen: length of the string
 *
 * Return: 1 if palindrome, 0 if otherwise
 */
int get_palindrome(char *s, int i, int strlen)
{
	if (*(s + i) != *(s + strlen - 1))
	{
		return (0);
	}
	if (i >= strlen)
	{
		return (1);
	}
	return (get_palindrome(s, i + 1, strlen - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (get_palindrome(s, 0, _strlen_recursion(s)));
}
