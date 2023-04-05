#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to search
 * @accept: string to match against s
 * Return: pointer to first occurance of c in s else return NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *check;

	while (*s)
	{
		check = accept;

		while (*check)
		{
			if (*check == *s)
			{
				return (s);
			}
			s++;

		}
	}

	return (NULL);
}
