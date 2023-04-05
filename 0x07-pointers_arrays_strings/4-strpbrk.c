#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to search
 * @accept: string to match against s
 * Return: pointer to first occurance of c in s else return NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int check;

	while (*s)
	{
		for (check = 0; accept[check]; check++)
		{
			if (*s == accept[check])
			{
				return (s);
			}
			s++;
		}
	}

	return ('\0');
}
