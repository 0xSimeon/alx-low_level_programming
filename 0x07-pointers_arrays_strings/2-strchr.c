#include "main.h"
/**
 * _strchr - Entry point
 * @s: the string to be evaluated for @c
 * @c: the character to be checked
 * Return: pointer to first occurance of @c in @s or NULL if no match
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
